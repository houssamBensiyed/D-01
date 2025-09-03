#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, n, searchedItem;
    int tableau[n];
    bool estPresent = false;

    printf("Vueillez entrer le nombre des elements: ");
    scanf("%d", &n);

    for (i=0; i < n; i++) {
        printf("Entrez l'élement %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrez la valeur que vous cherchez: ");
    scanf("%d", &searchedItem);

    for (i=0; i < 6; i++) {
        if ( tableau[i] == searchedItem) {
            estPresent = true;
            break;
        }
    }
    if(estPresent) {
        printf("L'element est Présent");
    } else {
        printf("L'element n'est pas présent");
    }
}