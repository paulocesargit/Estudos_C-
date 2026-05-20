#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade do jogador! ");
    scanf("%d", &idade);

    if (idade >= 16 && idade < 20)
    {
        printf("Liberado para jogar no sub-20");
    }
    else
    {
        printf("Jogar somente na categoria profissional");
    }

    return 0;
}