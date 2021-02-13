#include<stdio.h>

int main(int argc, char *argv[]) {

    float ancho = 0;
    float largo = 0;
    float perimetro = 0;
    float area = 0;

    printf("Ancho del terreno (u): ");
    scanf("%f",&ancho);

    largo = ancho * 3;
    perimetro = largo*2 + ancho*2;
    area = largo * ancho;

    printf("perimetro: %.3f u\n", perimetro);
    printf("     area: %.3f u²\n", area);

    return 0;
}
