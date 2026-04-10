#include <stdio.h>

int main()
{
    int num, i = 0;
    float media, soma = 0;

    while (num != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            soma = soma + num;
            i++;
        }
    }

    if (i > 0)
    {
        media = soma / i;
        printf("Media dos pares = %.2f\n", media);
    }
    else
    {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}