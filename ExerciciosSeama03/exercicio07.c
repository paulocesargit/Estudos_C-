#include <stdio.h>

int main()
{

    float salario, novoS;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if (salario < 1000)
    {
        novoS = salario * 1.10;
    }
    else
    {
        novoS = salario * 1.05;
    }

    return 0;
}