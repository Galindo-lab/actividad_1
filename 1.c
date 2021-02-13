#include<stdio.h>
#include<math.h>

// NOTE: Lo podria en centimetros pero al multiplica por 10 da mas error.
const int INCH_VALUE = 25.4;

int main(int argc, char *argv[])
{

    float milimetros = 0;
    float pulgadas   = 0;

    printf("\n * milimetros de lluvia a pulgadas *\n\n");

    printf("    milimetros de lluvia : ");
    scanf("%f",&milimetros);

    // NOTE: no quiero negativos.
    pulgadas = fabs(milimetros) / INCH_VALUE;

    // NOTE: nunca da el resultado exacto, cosas de flotantes.
    printf("    pulgadas de lluvia   : %.3f\n\n", pulgadas);

    return 0;
}
