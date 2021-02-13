#include<stdio.h>

int main(int argc, char *argv[]) {

    float peso_del_perro = 0;
    float medicamento = 0;

    printf("Peso del perro (kg): ");
    scanf("%f",&peso_del_perro);

    medicamento = (peso_del_perro/2) * 25;

    printf("La cantidad adecuada de medicamento es: %.2f mm\n",medicamento);

    return 0;
}
