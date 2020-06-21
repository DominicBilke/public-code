#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#if __STDC_NO_VLA__
    #error "No VLA Support!"
#endif // __STDC_NO_VLA__


int main()
{
    int iArray[3] = {0};
    iArray[0] = 1234;
    iArray[1] = 3456;
    iArray[2] = 7890;

    printf("iArray[0] = %d\n", iArray[0]);
    printf("iArray[1] = %d\n", iArray[1]);
    printf("iArray[2] = %d\n\n", iArray[2]);

    unsigned int iArray2[MAX];
    // Werte an alle Elemente
    for(unsigned int i = 0; i< MAX; i++) {
        iArray2[i] = i*i;
    }
    // Werte ausgeben
    for(unsigned int i = 0; i< MAX; i++) {
            printf("iArray2[%d] = %d\n", i, iArray2[i]);
    }
    printf("\n");

    int val = 0;
    printf("Anzahl der Elemente: ");
    if( scanf("%d", &val) != 1) {
        printf("Fehler bei der Eingabe...\n");
        return EXIT_FAILURE;
    }
    if(val > 0) {
        int iarr[val];
        for(int i= 0; i < val; i++) {
            iarr[i] = i;
        }
        for(int i=0; i < val; i++) {
            printf("%d\n", iarr[i]);
        }
    }
    printf("\n");

    int mdarray[2][3];
    mdarray[0][0] = 12;
    mdarray[0][1] = 23;
    mdarray[0][2] = 34;
    mdarray[1][0] = 45;
    mdarray[1][1] = 56;
    mdarray[1][2] = 67;
    for(int i = 0; i < 2; i++) {
        for(int j=0; j < 3; j++) {
            printf("[%d][%d] = %d\n", i, j, mdarray[i][j]);
        }
    }
    printf("\n");

    char string1[20] = "String";
    char string2[20] = {'S', 't', 'r', 'i', 'n', 'g', '\0'};
    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("\n");

    char name[20];
    printf("Bitte Ihren Namen: ");
    if( scanf("%19s", name) != 1) {
        if( scanf("%19s", name) != 1) {
            printf("Fehler bei der Eingabe\n");
            return EXIT_FAILURE;
        }
    }
    printf("Ihr Name ist %s\n\n", name);

    return EXIT_SUCCESS;
}
