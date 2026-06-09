#include <stdio.h>

int main()
{
    int i, j;
    char nomes[5][20], letra, encontrados;

    for (i = 0; i < 5; i++)
    {
        printf("Digite 0 %d nome: ", i + 1);
        scanf("%s", nomes[i]);
    }

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    for (i = 0; i < 5; i++)
    {
        encontrados = 0;
        for (j = 0; nomes[i][j] != '\0'; j++)
        {
            if (nomes[i][j] == letra)
            {
                encontrados = 1;
                break;
            }
        }

        if (encontrados)
        {
            printf("%s \n", nomes[i]);
        }
    }

    return 0;
}