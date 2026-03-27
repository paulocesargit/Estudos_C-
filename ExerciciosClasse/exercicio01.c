#include <stdio.h>

int main()
{

    int idade, anoNascimento, anoAtual = 2026;

    printf("Digite o ano que vc nasceu: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    printf("A sua idade e: %d\n ", idade);

    return 0;
}