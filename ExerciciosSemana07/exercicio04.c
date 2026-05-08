#include <stdio.h>

int main()
{

    int n;
    int i = 1, j = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (j <= 4)
    {
        i = 1;

        while (i <= 4)
        {
            printf(" %d ", n + j + i - 1);
            i++;
        }
        printf("\n");
        j++;
    }

    return 0;
}