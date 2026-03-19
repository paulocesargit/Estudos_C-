#include <stdio.h>

int main()
{

    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++)
    {
        if (numero > 10)
        {
            printf("Tabuada somente ate o numero 10");
            break;
        }
        else
        {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
    }

    return 0;
}