#include <stdio.h>
#include <stdlib.h>

int* iArray( unsigned int n) {
    int* iptr = malloc( n *(sizeof(int)));
    if(iptr != NULL) {
        for(unsigned int i=0; i<n; i++) {
            iptr[i] = i*i;
        }
    }
    return iptr;
}

int main()
{
    unsigned int val=0;
    printf("Wie viele Elemente benoetigen Sie: ");
    if( scanf("%u", &val) != 1 ) {
        printf("Fehler bei der Eingabe\n");
        return EXIT_FAILURE;
    }
    int* arr = iArray( val );
    if( arr == NULL ) {
        printf("Fehler bei Speicherreservierung!\n");
        return EXIT_FAILURE;
    }
    printf("Ausgabe der Elemente\n");
    for(unsigned i=0; i < val; i++) {
        printf("arr[%u] = %u\n", i, arr[i]);
    }
    if(arr != NULL) {
        free(arr);
    }
    return EXIT_SUCCESS;
}
