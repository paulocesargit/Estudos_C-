#include <stdio.h>

int main()
{
    int numeros[10], pares[10], j = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            pares[j] = numeros[i];
            j++;
        }
    }

    printf("Numeros pares!\n");

    for (int i = 0; i < j; i++)
    {
        printf("%d ", pares[i]);
    }

    return 0;
}