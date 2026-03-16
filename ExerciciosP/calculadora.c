#include <stdio.h>

int main()
{

    int num1, num2, opcao;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nEscolha uma opcao:\n");
    printf("1 - Adicao\n2 - Multiplicacao\n3 - Divisao\n4 - Subtracao\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    {
        int soma = num1 + num2;
        printf("A soma e %d\n", soma);
        break;
    }

    case 2:
    {
        int multiplicacao = num1 * num2;
        printf("A multiplicacao e %d\n", multiplicacao);
        break;
    }

    case 3:
    {
        if (num2 == 0)
        {
            printf("Erro: divisao por zero!\n");
        }
        else if (num1 == 0)
        {
            printf("Erro: divisao por zero!\n");
        }
        else
        {
            printf("Resultado: %d\n", num1 / num2);
        }
        break;
    }

    case 4:
    {
        int subtracao = num1 - num2;
        printf("A subtracao e %d\n", subtracao);
        break;
    }

    default:
        printf("Operacao invalida\n");
    }
}