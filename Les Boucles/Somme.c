#include <stdio.h>

int main() {
    int n;
    int somme = 0;

    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        somme += 1;
        }
    printf("La somme des %d premiers nombre naturels est: %d\n", n, somme);
    return 0;
}