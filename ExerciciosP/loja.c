/*Desenvolva um programa em linguagem C que permita analisar as vendas de uma equipe.

O programa deve:

Ler os valores de vendas de 4 vendedores ao longo de 3 dias, armazenando os dados em uma matriz.
Calcular e exibir o total de vendas de cada vendedor.
Identificar e informar qual vendedor obteve:
o maior total de vendas
o menor total de vendas
Calcular e exibir o total geral de vendas da equipe.*/

#include <stdio.h>

int main()
{
    const int vendedores = 4;
    const int vendas = 3;

    float equipe[vendedores][vendas];
    float vendasTotal = 0;
    float maiorVenda, menorVenda;
    int vendedorMaior, vendedorMenor;

    for (int i = 0; i < vendedores; i++)
    {
        float soma = 0;

        printf("\nVendedor %d\n", i + 1);

        for (int j = 0; j < vendas; j++)
        {
            printf("Digite a venda do dia %d: ", j + 1);
            scanf("%f", &equipe[i][j]);

            soma = soma + equipe[i][j];
            vendasTotal = vendasTotal + equipe[i][j];
        }

        printf("Total do vendedor %d: %.2f\n", i + 1, soma);

        if (i == 0)
        {
            maiorVenda = soma;
            menorVenda = soma;
            vendedorMaior = i;
            vendedorMenor = i;
        }
        else
        {
            if (soma > maiorVenda)
            {
                maiorVenda = soma;
                vendedorMaior = i;
            }

            if (soma < menorVenda)
            {
                menorVenda = soma;
                vendedorMenor = i;
            }
        }
    }

    printf("\nTotal geral da equipe: %.2f\n", vendasTotal);
    printf("Maior vendedor: %d com %.2f\n", vendedorMaior + 1, maiorVenda);
    printf("Menor vendedor: %d com %.2f\n", vendedorMenor + 1, menorVenda);

    return 0;
}