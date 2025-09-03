#include <stdio.h>

int main() {
    int tableau[5] = {1,2,3,4,5};
    int deuxiemeTableau[5];
    int i;

    for (i = 0; i < 5; i++) {
        deuxiemeTableau[i] = tableau[i];
    }


    printf("Le premier tableau: ");

    for (i = 0; i < 5; i++) {

        if (i == 4) {
            printf("%d.", tableau[i]);
            break;
        }

        printf("%d,", tableau[i]);
    }

    printf("\nLe deuxieme tableau : ");

    for (i = 0; i < 5; i++) {

        if (i == 4) {
            printf("%d.", tableau[i]);
            break;
        }

        printf("%d,", tableau[i]);
    }
} 