#include <stdio.h>

int main()
{

    int num1, num2, opcao;

    while (1)
    {

        printf("\n===== CALCULADORA =====\n");
        printf("1 - Adicao\n");
        printf("2 - Multiplicacao\n");
        printf("3 - Divisao\n");
        printf("4 - Subtracao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 5)
        {
            printf("Encerrando programa...\n");
            break;
        }

        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);

        printf("Digite o segundo numero: ");
        scanf("%d", &num2);

        switch (opcao)
        {

        case 1:
            printf("Resultado: %d\n", num1 + num2);
            break;

        case 2:
            printf("Resultado: %d\n", num1 * num2);
            break;

        case 3:
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

        case 4:
            printf("Resultado: %d\n", num1 - num2);
            break;

        default:
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}