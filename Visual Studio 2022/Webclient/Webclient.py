# Dieses Script wurde mit Visual Studio 2022 in Python geschrieben
# Dies ist ein Webclient f�r den Webserver.
# Es �bertr�gt einen Dateinamen und empf�ngt den Inhalt.
# Als Kommandozeilenargument wird der Host �bergeben. 
#
# (C) 2022 Dominic Bilke
#
#
#


import socket
import sys

if __name__ == '__main__':
    # Host von Kommandozeilem sonst localhost
    host = "localhost"
    if len(sys.argv) > 1:
       host = sys.argv[1]
    # Serververbindung
    sock = socket.socket(
        socket.AF_INET,
        socket.SOCK_STREAM,
       socket.getprotobyname("tcp")
    )
    ip = socket.gethostbyname(host)
    port = 8000
    sock.connect((ip, port))
    print("<0> Zuruecksetzen, <X> Beenden, Sonstige Eingabe: Dateiname")

    # Kommunikationsschleife
    while True:
       line = input("> ")
       # Je nach Eingabe Befehle an den Server senden
       if line == "0":
           # Z�hler zur�cksetzen
           sock.send(b"reset")
       elif line == "x" or line == "X":
           # Beenden
           sock.send(b"exit")
       else:
           # Standard: Anzahl/Datum erfragen
           sock.send(bytes(line, "UTF-8"))
       # Serverantwort lesenund ausgeben
       try: 
           antwort = sock.recv(1000).decode("UTF-8")
       except:
           antwort = "Fehler, Verbindung geschlossen!"
           sock.close()
           break
       print("Antwort von {}: \n\n{}\n\n".format(host, antwort))

       # Beenden?
       if line == 'x' or line == 'X':
           sock.close()
           break
