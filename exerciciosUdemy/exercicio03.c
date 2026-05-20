#include <stdio.h>

int main()
{

    int tempo, horas, minutos;

    printf("Digite o tempo em minutos da sua partida: ");
    scanf("%d", &tempo);

    horas = tempo / 60;
    minutos = tempo % 60;

    if (horas > 1)
    {
        printf("%d Hora %d e Minutos \n", horas, minutos);
    }
    else
    {
        printf("%d Horas e %d Minutos \n", horas, minutos);
    }

    return 0;
}