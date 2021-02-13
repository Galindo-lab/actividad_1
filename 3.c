#include<stdio.h>

const int DIAS2SEC = 86400;
const int HORA2SEC = 3600;
const int MIN2SEC  = 60;

int main(int argc, char *argv[]) {

    int dias,horas,minutos,segundos;
    long int segundos_totales = 0;

    printf("\n * convertir a segundos *\n\n");

    printf(" dias     : ");
    scanf("%d",&dias);
    printf(" horas    : ");
    scanf("%d",&horas);
    printf(" minutos  : ");
    scanf("%d",&minutos);
    printf(" segundos : ");
    scanf("%d",&segundos);

    segundos_totales = (dias * DIAS2SEC) + (horas * HORA2SEC) + (minutos * MIN2SEC) + segundos;

    printf("\n segundos totales : %ld\n\n",segundos_totales);

    return 0;
}
