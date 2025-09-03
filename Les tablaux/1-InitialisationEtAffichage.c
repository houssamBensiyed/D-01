// #include <stdio.h>

// int main() {
//     // Initialisation du tableau
//     int tableau[5] = {1, 2, 3, 4, 5};

//     // Affichage des valeurs
//     for (int i = 0; i < 5; i++) {
//         printf("%d\n", tableau[i]);
//     }

//     return 0;
// }




#include <stdio.h>

int main() {
    int i;
    // initialiser le tableau
    int table[] = {1,2,3,4,5};

    // looper sur le tableau
    for (i = 0; i < 5; i++) {
        printf("%d", table[i]);
    }

    // Remplir par l'utlisateur
    int number;
    printf("Entrer le nombre des elements: ");
    scanf("%d", &number);
    int table2[number]; 
    
    // Saisir les elements
    for (i = 0; i < number; i++) {
        printf("entrez nombre: ");
        scanf("%d", &table2[i]);
    }

    // looper sur le tableau
    for (i = 0; i < number; i++) {
        printf("%d", table2[i]);
    }
}

