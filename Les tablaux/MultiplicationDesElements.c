#include <stdio.h>

int main() {
    int n, factor;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int tableau[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Enter the  multiplication factor: ");
    scanf("%d", &factor);

    for(int i = 0; i < n; i++) {
        tableau[i] = tableau[i] * factor;
    }

    printf("Resulting array after multiplication: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}