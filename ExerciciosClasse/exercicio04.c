#include <stdio.h>

int main()
{

    float salario, novoSalario;
    int percentual;

    printf("Digite o seu salario atual: ");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste: ");
    scanf("%d", &percentual);

    novoSalario = salario + (salario * percentual / 100);

    printf("O seu salario novo e: %.3f", novoSalario);

    return 0;
}