#include <stdio.h>

int main()
{

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%2d", j);
        }
        printf("\n");
    }

    return 0;
}