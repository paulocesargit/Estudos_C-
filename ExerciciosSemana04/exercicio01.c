#include <stdio.h>

int main()
{
    int num, maior = 0;

    do
    {
        if (num > maior)
        {
            maior = num;
        }
        printf("Digite numeros:");
        scanf("%d", &num);
    } while (num != 0);

    printf("Maior numero: %d\n", maior);

    return 0;
}