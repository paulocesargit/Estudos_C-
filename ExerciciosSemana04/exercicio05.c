#include <stdio.h>

int main()
{
    int numeros, soma, i = 1;

    for (i = 0; i <= 50; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros);
        if (numeros % 2 == 1 && numeros >= 100 && numeros <= 200)
        {
            soma = numeros + numeros;
        }
    }

    printf("Soma dos numeros impar: %d", soma);

    return 0;
}