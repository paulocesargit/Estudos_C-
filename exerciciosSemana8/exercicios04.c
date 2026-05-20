// 3. Ordenação crescente (Bubble Sort)

#include <stdio.h>

int main()
{
    int n[4];
    int aux;

    for (int i = 0; i < 4; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (n[j] > n[j + 1])
            {
                aux = n[j];
                n[j] = n[j + 1];
                n[j + 1] = aux;
            }
        }
    }

    printf("Ordem crescente:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", n[i]);
    }

    return 0;
}