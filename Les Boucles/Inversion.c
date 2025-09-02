#include <stdio.h>

int main() {
    int nombre, inverse = 0;

    printf("Entrez un entier: ");
    scanf("%d", &nombre);

    int negatif = 0;
    
    if (nombre < 0) {
        negatif = 1 ;
        nombre = -nombre;
    }

    while (nombre !=0) {
        int chiffre = nombre % 10;
        inverse = inverse * 10 + chiffre;
        nombre /= 10;
    }

    if (negatif) {
        inverse = -inverse;
    }
    printf("L'inverse du nombre est: %d\n", inverse);
    
    return 0;
}