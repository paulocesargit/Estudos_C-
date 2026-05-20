#include <stdio.h>

int main()
{
    int n = 7, impar = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%3d", impar);
            impar += 2;
        }
        printf("\n");
    }

    return 0;
}