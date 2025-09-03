#include <stdio.h>

int main() {
        int n;

        printf("Enter the number of elemnts: ");
        scanf("%d", &n);

        int tableau[n];

        for(int i = 0; i < n; i++) {
            printf("Enter element %d: ", i + 1);
            // the user usually enter a normal value but the array is zero based that' why I putted i + 1
            scanf("%d", &tableau[i]);
        }
    }

    int min = tableau[0];

    for (int i = 1; i < n ; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    printf("The smallest element is: %d\n", min);

    return 0;
}