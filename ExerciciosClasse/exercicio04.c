#include <stdio.h>

int main()
{

    float salario, novoSalario, aumento;
    int percentual;

    printf("Digite o seu salario atual: ");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste: ");
    scanf("%d", &percentual);

    // novoSalario = salario + (salario * percentual / 100);

    aumento = salario * percentual / 100;
    novoSalario = salario + aumento;

    printf("O seu salario novo e: %.3f", novoSalario);

    return 0;
}