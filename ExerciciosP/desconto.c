#include <stdio.h>

int main()
{

    float preco, percentual, valorDesconto, precofinal;
    int opcao = 1;

    while (opcao != 0)
    {
        printf("Escolha uma opcao\n");
        printf("1-Cadastrar produtos\n 0- Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("Digite o preco do produto: \n");
            scanf("%f", &preco);

            printf("Digite o percentual de desconto: \n");
            scanf("%f", &percentual);

            if (preco <= 0)
            {
                printf("Preco invalido\n");
            }
            else if (percentual < 0 || percentual > 100)
            {

                printf("Desconto invalido\n");
            }
            else if (percentual > 50)
            {
                printf("Desconto muito alto\n");
            }
            else
            {
                precofinal = preco - (preco * (percentual / 100.0));
                valorDesconto = preco - precofinal;

                printf("Valor original: %.2f\n", preco);
                printf("Valor do desconto: %.2f\n", valorDesconto);
                printf("valor final: %.2f\n", precofinal);

                printf("Deseja calcular um novo produto?");
            }
        }
        else
        {
            printf("saindo...");
            break;
        }
    }
}