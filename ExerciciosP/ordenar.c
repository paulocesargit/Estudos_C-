#include <stdio.h>

int main()
{
    int vetor[5] = {5, 4, 2, 3, 9};
    int i, j, posMenor, temp;

    for (i = 0; i < 4; i++)
    {
        posMenor = i;

        for (j = i + 1; j < 5; j++)
        {
            if (vetor[j] < vetor[posMenor])
                posMenor = j;
        }

        temp = vetor[i];
        vetor[i] = vetor[posMenor];
        vetor[posMenor] = temp;
    }

    printf("Vetor ordenado:\n");

    for (i = 0; i < 5; i++)
        printf("%d ", vetor[i]);

    return 0;
}