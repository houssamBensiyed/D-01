#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, elements, oldElement, newElement;

    bool Success = false;

    printf("Vueillez saisir les nombres des elements: ");
    scanf("%d", &elements);
    int tableau[elements];
    
    for (i = 0; i < elements; i++) {
        printf("Saisir l'element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }
    
    printf("Vueillez saisir la valeur a remplacer: ");
    scanf("%d", &oldElement);
    printf("Vueillez saisir la nouvelle valeur: ");
    scanf("%d", &newElement);

    for (i = 0; i < elements; i++){
        if (tableau[i] == oldElement) {
            tableau[i] = newElement;
            Success = true;
        }
    }
    if (Success) {
        printf("L'operation a été avec succèes!\n");
        printf("Voice la nouvelle version du tableau: ");
        
        printf("{ ");
        for( i = 0; i < elements; i++) {
   
            if (i == elements - 1) {
                printf("%d}", tableau[i]);
            } else {
            printf("%d,", tableau[i]);
            }

        }
        printf("\n");
    }
    else {
        printf("L'élément %d n'est pas éte trouvé dans le tableau. \n", oldElement);
    }
}
