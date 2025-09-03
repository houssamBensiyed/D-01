#include <stdio.h>

int main() {
    double c;
    printf("Entrez la temperature en Celsius : ");
    scanf("%lf", &c);

    if(c < 0)
        printf("Etat de l'eau: Solide\n");
    else if(c < 100)
        printf("Etat de l'eau: Liquide\n");
    else
        printf("Etat de l'eau: Gaz\n");

    return 0;
}
