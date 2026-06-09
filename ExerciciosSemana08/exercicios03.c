#include <stdio.h>

int main()
{
    int n[8];
    int tirar;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }

    printf("Qual numero deseja que saia do vetor? ");
    scanf("%d", &tirar);

    for (int i = 0; i < 8; i++)
    {
        if (n[i] == tirar)
        {

            for (int j = i; j < 7; j++)
            {
                n[j] = n[j + 1];
            }

            break;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", n[i]);
    }

    return 0;
}