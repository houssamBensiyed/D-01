#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, z1, x2, y2, z2, distance;
    printf("Entrez les coordonnees du premier point (x y z) : ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);
    printf("Entrez les coordonnees du deuxieme point (x y z) : ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));
    printf("Distance entre les deux points : %.2lf\n", distance);

    return 0;
}
