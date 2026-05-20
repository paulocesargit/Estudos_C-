#include <stdio.h>

int main()
{

    int goals, partidas;
    float media = 0;

    printf("Dgite a quantidade de goals: ");
    scanf("%d", &goals);

    printf("Digite p total de partidadas: ");
    scanf("%d", &partidas);

    media = (float)goals / partidas;

    printf("A media de goals por partidas e: %.2f", media);

    return 0;
}