#include <stdio.h>

int main()
{

    int goals;

    printf("Digite a quantidade de goals do jogador: ");
    scanf("%d", &goals);

    if (goals > 10)
    {
        printf("Exerlente temporada! ");
    }
    else if (goals >= 5)
    {
        printf("Boa temporada! ");
    }
    else
    {
        printf("Temporada abaixo do esperado!");
    }

    return 0;
}