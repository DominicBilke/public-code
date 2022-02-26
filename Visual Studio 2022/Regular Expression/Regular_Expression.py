# Das Script wurde mit Visual Studio 2022 erstellt.
# Es liest einen Regulären Ausdruck und einen String ein.
# Dieser wird compiliert.
# Danach werden alle Treffer ausgegeben.
#
# Autor: Dominic Bilke
# (C) 2022 Dominic Bilke


import re

if __name__ == "__main__":

  #Eingaben 
  regExpr = input("Ein regulaerer Ausdruck bitte: ")
  text = input("Einen String bitte: ")

  #regulärer Ausruck, Compilierung
  regComp = re.compile(regExpr)
  treffer = re.findall(regComp, text)

  #Ausgabe
  print("\n", "Alle Treffer: ")
  for t in treffer:
      print(t)

    
