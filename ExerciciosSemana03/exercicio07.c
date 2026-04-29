#include <stdio.h>

int main()
{

    float salario, novoS;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if (salario < 1000)
    {
        novoS = salario + (salario * 0.10);
    }
    else
    {
        novoS = salario + (salario * 0.05);
    }

    printf("Seu novo salario: %.2f", novoS);

    return 0;
}