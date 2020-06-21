#include <stdio.h>
#include <stdlib.h>
#define WERT 1234
#define PI 3.1415
#define NOT_EQUAL(x, y)    ((x) != (y))
#define XCHANGE(x, y) {int j; j=(x); (x)=(y); (y)=j;}

double Kflaeche( double d) {
    return d * d * PI / 4;
}

double Kumfang( double d) {
    return d * PI;
}

int main(void)
{
    int val = WERT * 2;
    printf("%d\n", WERT);
    printf("%d\n\n", val);

    double d = 0.0;
    printf("Kreisdurchmesser: ");
    if( scanf("%lf", &d) != 1) {
        printf("Fehler beid er Eingabe...\n");
        return EXIT_FAILURE;
    }
    printf("Kreisflaeche von %.2f = %.2f\n", d, Kflaeche(d));
    printf("Kreisumfang von %.2f = %.2f\n\n", d, Kumfang(d));

    int ival1 = 0, ival2 = 0;
    printf("Bitte zwei Ganzzahlen eingeben: ");
    if( scanf("%d %d", &ival1, &ival2) != 2) {
        printf("Fehler bei der Eingabe...");
        return EXIT_FAILURE;
    }
    if( NOT_EQUAL(ival1, ival2) ) {
        XCHANGE(ival1, ival2);
    }
    printf("val1: %d - val2: %d\n\n", ival1, ival2);

    #if __STDC_VERSION__ >= 201112L
      printf("Die Ausrichtung von char: %zd\n", _Alignof(char));
    #else
      printf("Compüiler kann kein C11\n");
    #endif // __STDC_VERSION__

    printf("Datum der Übersetzung: %s\n", __DATE__);
    printf("Zeit der Übersetzung: %s\n", __TIME__);
    printf("Zeile: %3d | Datei: %s\n", __LINE__, __FILE__);

    return EXIT_SUCCESS;
}
