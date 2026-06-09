#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *proximo;
} No;

int main()
{
    No *inicio = NULL, *fim = NULL, *novo;
    int num;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        novo = (No *)malloc(sizeof(No));

        novo->valor = num;
        novo->proximo = NULL;

        if (inicio == NULL)
        {
            inicio = novo;
            fim = novo;
        }
        else
        {
            fim->proximo = novo;
            fim = novo;
        }
    }

    printf("\nNumeros da lista:\n");

    No *temp = inicio;

    while (temp != NULL)
    {
        printf("%d ", temp->valor);
        temp = temp->proximo;
    }

    return 0;
}