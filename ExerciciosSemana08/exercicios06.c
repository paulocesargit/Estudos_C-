#include <stdio.h>

int main()
{
    char nomes[5][20], pesquisar[20];
    int nomeachado = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite os nomes das pessoas: ");
        scanf("%s", nomes[i]);
    }

    printf("Digite um nome para pesquisar: ");
    scanf("%s", pesquisar);

    for (int i = 0; i < 5; i++)
    {
        int j = 0;

        while (nomes[i][j] == pesquisar[j] && nomes[i][j] != '\0' && pesquisar[j] != '\0')
        {
            j++;
        }

        if (nomes[i][j] == '\0' && pesquisar[j] == '\0')
        {
            nomeachado = 1;
        }
    }

    if (nomeachado == 1)
    {
        printf("Nome encontrado!\n");
    }
    else
    {
        printf("Nome nao encontrado!\n");
    }

    return 0;
}