#include <stdio.h>

int main() {
    int n;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tableau[n];
    int somme = 0;

    // Saisie des éléments du tableau
    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tableau[i]);
        somme += tableau[i];  // Ajout immédiat à la somme
    }

    // Affichage de la somme
    printf("La somme des elements du tableau est: %d\n", somme);

    return 0;
}
