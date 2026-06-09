#include <stdio.h>

typedef struct
{
    char nome[50];
    int idade;
    float altura;

} Pessoa;

int main()
{
    Pessoa pessoas[3];
    int maisVelha = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("=== Pessoa %d =====\n", i + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Digite o idade: ");
        scanf(" %d", &pessoas[i].idade);

        printf("Digite o altura: ");
        scanf(" %f", &pessoas[i].altura);

        if (pessoas[i].idade > pessoas[maisVelha].idade)
        {
            maisVelha = i;
        }
    }

    printf("Pessoa mais velha: %s", pessoas[maisVelha].nome);

    return 0;
}