#include <stdio.h>

int main() {
    double celsius, kelvin;
    printf("Entrez la temperature en Celsius : ");
    scanf("%lf", &celsius);
    kelvin = celsius + 273.15;
    printf("Temperature en Kelvin : %.2lf K\n", kelvin);
    return 0;
}
