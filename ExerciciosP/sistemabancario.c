#include <stdio.h>

int main()
{

    int opcao;
    float valor, saldo = 1000;

    while (1)
    {
        printf("\n=== SISTEMA BANCARIO ===\n");
        printf("1 - Ver saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:
            printf("Saldo: %.2f\n", saldo);
            break;

        case 2:
            printf("Digite o valor do deposito: ");
            scanf("%f", &valor);
            saldo += valor;
            printf("Deposito realizado!\n");
            break;

        case 3:
            printf("Digite o valor do saque: ");
            scanf("%f", &valor);

            if (valor <= saldo)
            {
                saldo -= valor;
                printf("Saque realizado!\n");
            }
            else
            {
                printf("Saldo insuficiente!\n");
            }
            break;

        case 4:
            printf("Encerrando sistema...\n");
            return 0;

        default:
            printf("Opcao invalida!\n");
        }
    }
}