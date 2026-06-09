#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int cliente;
    struct No *proximo;
} No;

No *inicio = NULL;
No *fim = NULL;

void inserirCliente(int numero)
{
    No *novo = (No *)malloc(sizeof(No));

    novo->cliente = numero;
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

void atenderCliente()
{
    if (inicio == NULL)
    {
        printf("Fila vazia!\n");
        return;
    }

    No *temp = inicio;

    printf("Cliente %d atendido.\n", temp->cliente);

    inicio = inicio->proximo;

    free(temp);

    if (inicio == NULL)
    {
        fim = NULL;
    }
}

void mostrarFila()
{
    No *temp = inicio;

    printf("\nFila: ");

    while (temp != NULL)
    {
        printf("%d ", temp->cliente);
        temp = temp->proximo;
    }

    printf("\n");
}

int main()
{
    int opcao;
    int numero;

    do
    {
        printf("\n1 - Inserir Cliente");
        printf("\n2 - Atender Cliente");
        printf("\n3 - Mostrar Fila");
        printf("\n0 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Numero do cliente: ");
            scanf("%d", &numero);
            inserirCliente(numero);
            break;

        case 2:
            atenderCliente();
            break;

        case 3:
            mostrarFila();
            break;
        }

    } while (opcao != 0);

    return 0;
}