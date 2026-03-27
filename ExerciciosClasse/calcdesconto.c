#include <stdio.h>

int main()
{

    float valorProduto, valorFinal, desconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o desconto para esse produto: ");
    scanf("%f", &desconto);

    valorFinal = valorProduto - (valorProduto * desconto / 100);

    printf("O valor do desconto e: %.2f", valorFinal);

    return 0;
}