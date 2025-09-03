#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", n);

    int tableau[n];

    // Input elements into the array
    for (int i = 0; i < n; i ++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    int max = tableau[0];

    for (int i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    printf("The largest element is: %d\n", max);

    return 0;
}