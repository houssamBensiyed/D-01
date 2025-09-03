#include <stdio.h>

int main() {
    int tableau[5] = {1,2,3,4,5};
    int tableauInverse[5];
 
    for (int i = 0; i < 5; i++) {
        tableauInverse[4-i] = tableau[i];
    }

    printf("Le tableau inversé: {");

    for (int i= 0; i < 5; i++) {
        if (i == 4) {
            printf("%d}", tableauInverse[i]);
            
        } else {
            printf("%d,", tableauInverse[i]);
        }
        
    }

}
