#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int iVal = 0;
    double dVal = 0;
    printf("sizeof(iVal)  : %zu\n", sizeof(iVal));
    printf("sizeof(dVal)  : %zu\n", sizeof(dVal));


    printf("sizeof(float)  : %zu\n", sizeof(float));
    printf("sizeof(char)  : %zu\n\n", sizeof(char));

    printf("min. char-Wert     : %d\n", SCHAR_MIN);
    printf("max. char-Wert     : +%d\n", SCHAR_MAX);

    printf("min. short-Wert    : %d\n", SHRT_MIN);
    printf("max. short-Wert    : +%d\n", SHRT_MAX);

    printf("min. int-Wert      : %d\n", INT_MIN);
    printf("max. int-Wert      : +%d\n", INT_MAX);

    printf("min. long-Wert     : %ld\n", LONG_MIN);
    printf("max. long-Wert     : +%ld\n", LONG_MAX);

    printf("min. long long-Wert: %lld\n", LLONG_MIN);
    printf("max. long long-Wert: +%lld\n\n", LLONG_MAX);

    printf("float-Genauigkeit  : %d\n", FLT_DIG);
    printf("double-Genauigkeit : %d\n", DBL_DIG);
    printf("long double-Gngk.  : %d\n\n", LDBL_DIG);

    return 0;
}
