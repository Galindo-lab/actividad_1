#include<stdio.h>

int main(int argc, char *argv[]) {

    float t_celcius = 0;
    float t_fahrenheit = 0;

    printf("Temperatura en Celcius: ");
    scanf("%f",&t_celcius);

    // calc fahrenheit
    t_fahrenheit = 9/5 * t_celcius + 32;

    printf("Temperatura en Fahrenheit: %.2f°\n",t_fahrenheit);

    return 0;
}
