# Dieses Script wurde in Visual Studio 2022 in Python geschrieben.
# Es rechnet Masseinheiten um.
# Eingabe, Auswertung, Berechnung, Ausgabe
# 
# (C) 2022 Dominic Bilke
#

if __name__ == "__main__":
    # Eingabe der Werte
    eingabe = input("Bitte eingeben 'Zahl Masseinheit Masseinheit': ")    
    liste = eingabe.split(" ")

    # Fallunterscheidung
    if len(liste) == 3:
      zahl = liste[0]
      mass1 = liste[1]
      mass2 = liste[2]

      switcher = {
          'mm': 0.001,
          'cm': 0.01,
          'dm': 0.1,
          'm': 1,
          'km': 1000
          }

      umr1 = switcher.get(mass1, "Falsche Eingabe von Masseinheit 1")
      umr2 = switcher.get(mass2, "Falsche Eingabe von Masseinheit 2")

      # Ergebnis berechnen
      ergebnis = int(zahl)*umr1/umr2

      # Ergebnis ausgeben
      print("Ergebnis der Umrechnung:", zahl, mass1, "=", ergebnis, mass2)

    else:
        # Fehlerbehandlung
        print("Falsche Eingabe")
