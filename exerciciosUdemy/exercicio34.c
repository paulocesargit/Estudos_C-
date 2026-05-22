#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    int tamanho, proibidos = 0;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    tamanho = strlen(nome);

    for (int i = 0; i < tamanho; i++)
    {
        if (nome[i] == '$' || nome[i] == '@' || nome[i] == '*' || nome[i] == '#' || nome[i] == '%' || nome[i] == '&')
        {
            proibidos++;
        }
    }

    if (tamanho > 0)
    {
        printf("Nome %s invalido com %d caracters proibidos! \n", nome, proibidos);
    }
    else
    {
        printf("Nome valido! \n");
    }

    return 0;
}
