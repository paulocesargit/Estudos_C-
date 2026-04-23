#include <stdio.h>

int main()
{
    int n, i, f = 1;

    printf("Digite um numero para saber seu fatorial: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    printf("%d\n", f);

    return 0;
}