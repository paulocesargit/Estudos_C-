#include <stdio.h>

int main()
{

    char Modelo[20];
    int anoFabricacao, funcionamneto, carrosCadastrados;

    printf("Digite a quantidade de carros que deseja cadastrar: ");
    scanf("%d", &carrosCadastrados);

    for (int i = 0; i < carrosCadastrados; i++)
    {
        printf("Carro: %d\n", i + 1);
        printf("Digite o modelo do carro: ");
        scanf("%s", Modelo);
        printf("Digite o Ano de fabricacao: ");
        scanf("%d", &anoFabricacao);
        printf("Digite se esta funcionando normalmente 1 - Funcionando ou 0 - Quebrado\n");
        scanf("%d", &funcionamneto);

        if (anoFabricacao < 2005 && funcionamneto == 0)
        {
            printf("O carro %s precisa de REPAROS URGENTES!\n", Modelo);
        }
        else if (anoFabricacao < 2005 && funcionamneto == 1)
        {

            printf("printf(O carro %s e antigo, recomenda-se uma revisao!\n", Modelo);
        }
        else if (anoFabricacao >= 2005 && funcionamneto == 0)
        {
            printf("O carro %s precisa de manutencao!\n", Modelo);
        }
        else if (anoFabricacao >= 2005 && funcionamneto == 1)
        {
            printf("O carro %s esta em boas condecoes!\n", Modelo);
        }
    }

    return 0;
}