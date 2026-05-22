#include <stdio.h>

int main()
{
    int moedas = 0, rodadas = 0, digitado;

    do
    {
        printf("Digite a quantidades de moedas nessa rodada: ");
        scanf("%d", &digitado);
        moedas += digitado;
        rodadas++;

    } while (moedas != 100);

    printf("Foi nesse sarias %d rodadas para chegar %d moedas\n", rodadas, moedas);

    return 0;
}