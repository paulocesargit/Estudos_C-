#include <stdio.h>

int main()
{

    int n;

    printf("Digite um numero para fazer uma arvore de natal: ");
    scanf("%d", &n);

    printf("=============Feliz Natal===============\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf(" ");
        }

        for (int j = 1; j < i * 2; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    printf("=======================================\n");
    return 0;
}