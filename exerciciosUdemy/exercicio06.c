#include <stdio.h>

int main()
{
    int cartao;

    printf("Quantidade de cartoes amarelos que o jogador recebeu: ");
    scanf("%d", &cartao);

    if (cartao == 2)
    {
        printf("Expulso!");
    }
    else
    {
        printf("Ainda em partida! ");
    }

    return 0;
}