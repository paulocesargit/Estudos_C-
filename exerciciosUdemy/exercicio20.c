#include <stdio.h>

int main()
{
    char nome[10];
    int quantidade, estoqueMinimo, cadastrar;

    printf("Digite a quantidade de produtos que voce deseja cadastrar: ");
    scanf("%d", &cadastrar);

    for (int i = 0; i < cadastrar; i++)
    {
        printf("Produto: %d\n", i + 1);

        printf("Digite o nome do produto: ");
        scanf("%s", nome);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &quantidade);

        printf("Digite o estoque minimo recomendado: ");
        scanf("%d", &estoqueMinimo);

        if (quantidade < estoqueMinimo)
        {
            printf("=================================\n");
            printf("O produto %s precisa ser reposto! (Estoque: %d, Minimo: %d) \n", nome, quantidade, estoqueMinimo);
        }
        else
        {
            printf("=================================\n");
            printf(" O produto %s tem estoque suficiente. (Estoque: %d, Minimo: %d)\n", nome, quantidade, estoqueMinimo);
        }
    }

    return 0;
}