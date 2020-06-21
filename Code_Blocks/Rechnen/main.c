#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

int main()
{
    int iVar = 0;
    printf("Bitte eine Ganzzahl eingeben: ");
    int check = scanf("%d", &iVar);
    if( check == EOF ) {
        printf("Fehler bei scanf...\n");
        return 1;
    }
    printf("%d Wert(e) eingegeben; ", check);
    printf("der eingegebene Wert lautet: %d\n", iVar);
    printf("Die Adresse von iVar lautet: %p\n\n", &iVar);


    int iVar1 = 0;
    int iVar2 = 0;
    printf("Bitte zwei Ganzzahlen eingeben: ");
    check = scanf("%d %d", &iVar1, &iVar2);
    if( check != 2 ) {
        printf("Fehler: Zwei Ganzzahlen erwartet\n");
        return 1;
    }
    printf("%d Wert(e) eingelesen: ", check);
    printf("%d und %d\n\n", iVar1, iVar2);

    long double ldVal = 8.8;
    double dVal = 5.5;
    float fVal = 3.3;

    printf("Quadratwurzel-Berechnungen:\n");
    printf("(long double) sqrtl(%Lf) = %Lf\n", ldVal, sqrtl(ldVal));
    printf("(double) sqrtl(%lf) = %lf\n", dVal, sqrt(dVal));
    printf("(float) sqrtf(%f) = %f\n", fVal, sqrtf(fVal));

    double pi = 4 * atan(1.0);
    double complex c = cexp(I * pi);
    printf("%lf + %lf * i\n", creal(c), cimag(c));

    return 0;
}
