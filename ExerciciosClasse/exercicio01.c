#include <stdio.h>

int main()
{

    int idade, anoNascimento, anoAtual = 2026;

    printf("Digite o ano que vc nasceu: ");
    scanf("%d", &anoNascimento);

    idade = anoNascimento - anoAtual;

    printf("A sua idade e: %d\n ", idade);

    return 0;
}