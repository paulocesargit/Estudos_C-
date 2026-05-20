#include <stdio.h>

int main()
{

    int n;

    printf("Digite um numero para saber a tabuada dele: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", n, i + 1, (i + 1) * n);
    }

    return 0;
}