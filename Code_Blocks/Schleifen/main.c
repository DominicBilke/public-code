#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int cnt = 1; cnt <=5; cnt++) {
        printf("%d. Schleifendurchlauf\n", cnt);
    }
    printf("\n");

    for(int i=1, j=10; i < j; i++, j--) {
        printf("i = %d, j=%d\n", i, j);
    }
    printf("\n");

    for(int i=1; i < 5; i++) {
        for(int j=0; j < 5; j++) {
            printf("i = %d, j=%d\n", i, j);
        }
    }
    printf("\n");

    int iVal = 10;
    while ( iVal > 0) {
        if( iVal % 2) {
            printf("%d ", iVal);
        }
        iVal--;
    }
    printf("\n");

    return 0;
}
