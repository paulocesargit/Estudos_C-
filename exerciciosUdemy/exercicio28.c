#include <stdio.h>

void aluno(int nota)
{
    if (nota >= 6)
    {
        printf("Aprovado!\n");
    }
    else if (nota >= 4 && nota < 6)
    {
        printf("Recuperacao\n");
    }
    else
    {
        printf("Rerpovado\n");
    }
}

int main()
{
    int nota;

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    aluno(nota);

    return 0;
}