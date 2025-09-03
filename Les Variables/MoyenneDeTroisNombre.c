#include <stdio.h>

int main() {
    double n1, n2, n3, moyenne;
    printf("Entrez trois nombres : ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    moyenne = (n1*2 + n2*3 + n3*5) / 10;
    printf("Moyenne pondee: %.2lf\n", moyenne);

    return 0;
}
