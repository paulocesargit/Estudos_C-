#include <stdio.h>

int main()
{
    int i, v[100];

    for (i = 0; i <= 100; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }

    return 0;
}