#include <stdio.h>
#include <stdlib.h>

void hallo(void) {
  printf("In der Funktion\n");
}

void multi(int iVal1, int iVal2) {
    printf("%d * %d = %d\n", iVal1, iVal2, iVal1 * iVal2);
}

int intcmp(unsigned int val1, unsigned int val2) {
    if(val1 > val2) {
        return val1;
    }
    if(val1 < val2) {
        return val2;
    }
    return 0; // beide gleich
}

long fakul ( long n ) {
    if(n != 0) {
        return n * (fakul(n-1));
    }
    return 1;
}

int main()
{
    printf("Vor der Funktion\n");
    hallo();
    printf("Nach der Funktion\n\n");

    int val1 = 0, val2 = 0;
    printf("Bitte zwei positive Ganzzahlen: ");
    if( scanf("%d %d", &val1, &val2) != 2) {
        printf("Fehler bei der Eingabe...");
        return 1;
    }
    multi(val1, val2);
    printf("\n");

    unsigned int ival1 = 0, ival2 = 0;
    printf("Bitte zwei positive Ganzzahlen: ");
    if( scanf("%u %u", &ival1, &ival2) != 2) {
        printf("Fehler bei der Eingabe...");
        return 1;
    }
    int cmp = intcmp(ival1, ival2);
    if(cmp != 0) {
        printf("%d ist der hoehere Wert\n", cmp);
    }
    else {
        printf("Beide Werte sind gleich!\n");
    }
    printf("\n");

    printf("Fakultaet von 6: %ld\n", fakul(6));
    printf("Fakultaet von 8: %ld\n", fakul(8));

    return 0;
}
