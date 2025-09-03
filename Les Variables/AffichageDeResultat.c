#include <stdio.h>

int main() {
    double a, b;
    printf("Entrez deux nombres reels : ");
    scanf("%lf %lf", &a, &b);

    printf("a + b = %.2lf\n", a + b);
    printf("a - b = %.2lf\n", a - b);
    printf("a * b = %.2lf\n", a * b);
    if(b != 0)
        printf("a / b = %.2lf\n", a / b);
    else
        printf("Division par zero impossible\n");

    return 0;
}
