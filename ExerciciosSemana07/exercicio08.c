#include <stdio.h>

int main()
{

    int atual = 1, anterior = 0, proximo;

    for (int i = 0; i <= 20; i++)
    {
        printf(" %d ", anterior);

        proximo = anterior + atual;

        anterior = atual;
        atual = proximo;
    }

    return 0;
}