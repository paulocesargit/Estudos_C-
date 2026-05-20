#include <stdio.h>

int main()
{

    int idade, goals;

    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);

    printf("Digite a quantidade goals que esse jogador fez: ");
    scanf("%d", &goals);

    if (idade <= 20 && goals > 10)
    {
        printf("Jovem talentoso promissor! ");
    }
    else if (idade <= 20 && goals <= 10)
    {
        printf("Jovem em desenvolvimento!");
    }
    else if (idade > 20 && goals > 15)
    {
        printf("Jogador experiente em grande fase!");
    }
    else if (idade > 20 && goals <= 15)
    {
        printf("Estevao");
    }

    return 0;
}