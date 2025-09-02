#include <stdio.h>

int main() {
    int n;

    unsigned long long factorial = 1;
    
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur: le nombre doit étre positif.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
}