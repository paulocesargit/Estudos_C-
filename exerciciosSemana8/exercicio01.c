#include <stdio.h>

int main()
{
    int v[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("Vetor original \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\nVetor invertido \n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }

    return 0;
}