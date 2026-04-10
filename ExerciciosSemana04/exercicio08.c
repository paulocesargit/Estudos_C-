#include <stdio.h>

int main()
{
    int numero1, numero2, i, produto = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    for (i = 0; i < numero2; i++)
    {
        produto = produto + numero1;
    }

    printf("Produto = %d\n", produto);

    return 0;
}