#include <stdio.h>

int main()
{
    int numeros, i = 0;
    float media = 0, soma = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros);

        soma = soma + numeros;
        i++;

    } while (numeros != -1);

    media = soma / i;

    printf("A Media dos numeros digitados e: %.2f", media);

    return 0;
}