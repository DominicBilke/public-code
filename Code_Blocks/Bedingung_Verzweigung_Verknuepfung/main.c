#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iVal = 0;
    printf("Bitte eine Ganzzahl eingeben: ");
    int check = scanf("%d", &iVal);
    if( check ) {
        //  Der Code wird ausgeführt, wenn die Bedingung, dass
        // der Wert check nicht 0 ist, wahr ist.
        printf("Ihre Eingabe: %d\n", iVal);
    }
    printf("Außerhalb der if-Verzweigung\n\n");

    if(check != 0) {
        printf("Ihre Eingabe: %d\n\n", iVal);
    }

    if(check == 1) {
        printf("Ihre Eingabe: %d\n\n", iVal);
    }

    iVal = 0;
    printf("Bitte eine Ganzzahl eingeben: ");
    if( scanf("%d", &iVal) == 1) {
        printf("Ihre Eingabe: %d\n\n",  iVal);
    }

    int iVal1 = 10 > 5;
    int iVal2 = 5 == 4;
    int iVal3 = iVal1 != iVal2;
    printf("(10 > 5) = %d; (5 == 4) = %d; (iVal1 != iVal2) = %d\n\n", iVal1, iVal2, iVal3);

    int val1 = 0, val2 = 0;
    printf("Bitte zwei Ganzzahlen eingeben: ");
    check = scanf("%d %d", &val1, &val2);
    if (check != 2) {
        printf("Fehler bei der Eingabe ... \n");
        return 1;
    }

    const int max = (val1 > val2) ? val1 : val2;
    printf("Hoeherer Wert: %d\n\n", max);

    iVal = 0;
    printf("Bitte eine Ganzzahl eingeben: ");
    check = scanf("%d", &iVal);
    if( check != 1) {
        printf("Fehler bei der Eingabe!\n\n");
    }
    else {
        printf("Ihre Eingabe: %d\n\n", iVal);
    }

    printf("Ausserhalb er If-Verzweigung\n\n");

    int eingabe = 0;
    printf("-1- Level 1\n");
    printf("-2- Level 2\n");
    printf("-3- Level 3\n");
    printf("-4- Beenden\n");
    printf("Ihre Auwahl bitte: ");
    check = scanf("%d", &eingabe);
    if(check != 1) {
      printf("Fehler bei der Eingabe ...\n");
      return 1;
    }
    switch(eingabe) {
        case 1 : printf("Level 1 war die Auswahl\n");
                 break;
        case 2 : printf("Level 2 war die Auswahl\n");
                 break;
        case 3 : printf("Level 3 war die Auswahl\n");
                 break;
        case 4 : printf("Beenden war die Auswahl\n");
                 break;
        default: printf("%d= Unbekanntes Level!\n", eingabe);
    }

    return 0;
}
