#include <stdio.h>
#include <stdlib.h>

void reset( int *val) {
    *val = 0;
}

int main()
{
    int *iptr;
    int ival = 255;
    iptr = &ival;
    printf("Adresse iptr: %p\n", &iptr);
    printf("zeigt auf: %p\n", iptr);
    printf("Adresse ival: %p\n\n", &ival);

    float *fptr;
    float fval1 = 123.123f, fval2;
    fptr = & fval1;
    fval2 = *fptr;
    printf("fval2:  %.3f\n\n", fval2);

    ival = 1234567;
    printf("ival: %d\n", ival);
    reset( &ival );
    printf("ival: %d\n", ival);

    return EXIT_SUCCESS;
}
