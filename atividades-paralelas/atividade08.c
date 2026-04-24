// Crie um programa que leia a idade de várias pessoas até digitar -1 e mostre a média das idades.

int main()
{
    int idade, quantidade = 0;
    float soma = 0, media;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    while (idade != -1)
    {
        soma = soma + idade;
        quantidade++;

        printf("Digite sua idade: ");
        scanf("%d", &idade);
    }

    if (quantidade > 0)
    {
        media = soma / quantidade;
        printf("A media das idades e: %.2f", media);
    }
    else
    {
        printf("Nenhuma idade valida foi informada.");
    }

    return 0;
}

/* Usando o DO WHILE
#include <stdio.h>

int main()
{

    int idade, count = 0;
    float media = 0, soma = 0;

    do
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (idade != -1)
        {
            soma += idade;
            count++;
        }

    } while (idade != -1);

    media = soma / count;

    printf("A media das idades sao: %.2f", media);

    return 0;
}
    */