# Das Script wurde in Visual Studio 2022 in Python geschrieben.
# Dies ist ein Webserver zur Ausgabe an den Client, bzw.an den Browser.
# Es geht beides. Als Argumente können Port und Verzeichnis übergeben werden.
# 
# (C) 2022 Dominic Bilke
#
#

import socket
import time
import datetime
import multiprocessing 
import sys
import os



# einzelne Clientverbindung verarbeiten
def handle_conn(clientsocket, address, directory):
    number = 0
    # Anfrage lesen

    while True:
        request = clientsocket.recv(1000).decode("utf-8")
        if request == "exit":
            # Beenden bei exit
            clientsocket.close()
            break
        if request == "reset":
            # reset? Anzahl zuruecksetzen
            number = 0
        

        # Datum und Uhrzeit
        ts = time.strftime("%a, %d %b %Y %H:%M:%S", time.localtime())

        # Anzahl erhoehen
        number += 1

        # Ausgabe an den Client
        if len(request) > 100:
            client = False
        else:
            client = True
        try:
            # Datei extrahieren
            if os.path.exists(request):
                datei = request
            else:
                datei = request.split()[1]

                # Wenn leer, dann index.html
                if datei == "/":
                    datei = "index.html"
                else:
                    datei = datei[1:]
                    
            # Datei einlesen
            fobj = open(directory+"/"+datei, 'r')
            ftext = fobj.read()
            fobj.close()

            # Header 200
            response = b"HTTP/1.1 200 OK\n"
        except:   
            # Header 404
            response = b'HTTP/1.1 404 Not Found\n'
            ftext = '<html><body><center><h1>Error 404: File not found</h1></center><p>Head back to <a href="/">dry land</a>.</p></body></html>'
            
        # Header+Datei als Antwort
        response += bytes('Date: {}\n'.format(ts), "UTF-8")
        response += b'Server: Simple-Python-Server\n'
        response += b'Connection: close\n\n'
        response += bytes(ftext, "UTF-8")
        clientsocket.send(response)

        # Log-Ausgabe (Konsole)
        print("{}: {} ({})".format(address[0], request, ts))

        # Verbindung zum Server beenden
        if not client:
            clientsocket.close()
            break
    
    print("Connection closed by peer.")
    
if __name__ == '__main__':
    # Eingabe der Kommandozeile
    if len(sys.argv) == 3:
        port = sys.argv[1]
        directory = sys.argv[2]
    else:
        port = 8000
        directory = "."
    # Lauschendes Socket erzeugen und konfigurieren
    serversocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    serversocket.bind(("127.0.0.1", port))
    serversocket.listen(socket.SOMAXCONN)
    print("Server lauscht an Port", port)
    while True:
        (clientsocket, address) = serversocket.accept()
        # Verbindungsaufbau? Child-Prozess erzeugen
        p = multiprocessing.Process(target=handle_conn, args=(clientsocket, address, directory ))
        p.start()


