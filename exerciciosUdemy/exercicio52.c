#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct
{
    char itens[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p)
{
    p->topo = -1;
}

void push(Pilha *p, char valor)
{
    p->itens[++p->topo] = valor;
}

char pop(Pilha *p)
{
    return p->itens[p->topo--];
}

int vazia(Pilha *p)
{
    return p->topo == -1;
}

int main()
{
    char expressao[100];

    printf("Digite a expressao: ");
    fgets(expressao, 100, stdin);

    Pilha p;
    inicializar(&p);

    for (int i = 0; expressao[i] != '\0'; i++)
    {
        if (expressao[i] == '(')
        {
            push(&p, '(');
        }
        else if (expressao[i] == ')')
        {
            if (vazia(&p))
            {
                printf("Nao balanceado\n");
                return 0;
            }

            pop(&p);
        }
    }

    if (vazia(&p))
    {
        printf("Balanceado\n");
    }
    else
    {
        printf("Nao balanceado\n");
    }

    return 0;
}