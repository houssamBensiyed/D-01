#include <stdio.h>

int main() {
    double kmh, ms;
    printf("Entrez la vitesse en km/h : ");
    scanf("%lf", &kmh);
    ms = kmh * 0.27778;
    printf("Vitesse en m/s : %.2lf m/s\n", ms);
    return 0;
}
