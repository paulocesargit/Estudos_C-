#include <stdio.h>

int main()
{
    float numero, f = 1;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    while (numero >= 1)
    {
        f = f * numero;
        numero--;
    }

    printf("Fatorial: %.2f\n", f);

    return 0;
}

/*
Outra forma de fazer:

#include <stdio.h>

int main()
{
    float numero, f = 1;
    int i = 1;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    while (i <= numero)
    {
        f = f * i;
        i++;
    }

    printf("Fatorial: %.2f\n", f);

    return 0;
}


*/