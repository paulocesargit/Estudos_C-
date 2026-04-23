#include <stdio.h>

int main()
{
    int i, num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        soma = soma + num;
    }

    printf("Resultado: %d", soma);

    return 0;
}