#include <stdio.h>

int main()
{

    int i, j, temp, vetor[4];

    for (i = 0; i < 4; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            if (vetor[i] < vetor[j])
            {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d", vetor[i]);
    }

    return 0;
}