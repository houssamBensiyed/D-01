#include <stdio.h>

int main() {
    int n;
    
    printf("Entrez le nombre de termes de la suite de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erreur: le nombre doit etre positif.\n");
        return 1;
    }

    int a = 0, b = 1;

    printf("Les %d premiers termes de la suite de fibonacci sont: \n", n);

    for (int i = 0; i < n; i++) {
        printf("%d", a);
        int suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n");
    return 0;
}