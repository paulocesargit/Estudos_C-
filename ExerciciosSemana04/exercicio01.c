#include <stdio.h>

int main()
{
    int num, maior = 0;

    printf("Digite numeros:");
    do
    {
        if (num > maior)
        {
            maior = num;
        }
        scanf("%d", &num);
    } while (num != 0);

    printf("Maior numero: %d\n", maior);

    return 0;
}