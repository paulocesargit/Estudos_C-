#include <stdio.h>

int main()
{
    int numero = 1, i, result = 0;

    while (numero <= 5)
    {
        for (i = 1; i <= 10; i++)
        {
            result = numero * i;
            printf("Tabuada %d x %d = %d\n", numero, i, result);
        }
        numero++;
    }

    return 0;
}