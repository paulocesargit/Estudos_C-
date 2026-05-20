#include <stdio.h>

int main()
{
    int par = 2, n = 10;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", par);
            par += 2;
        }

        printf("\n");
    }

    return 0;
}