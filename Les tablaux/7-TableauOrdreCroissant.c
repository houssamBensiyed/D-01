#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int tableau[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Expected behaviour:
    /*
    Initial (par exemple):   5  3  4  1
    Pass 1:    3  4  1  5
    Pass 2:    3  1  4  5
    Pass 3:    1  3  4  5
    Sorted:    1  3  4  5
    
    
    
    */


    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}