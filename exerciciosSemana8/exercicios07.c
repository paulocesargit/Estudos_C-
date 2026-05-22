#include <stdio.h>

int main()
{
    int notaAluno[10], aprovados = 0, reprovados = 0;

    printf("Digite a situacao dos alunos:\n");
    printf("1- Aprovado 0 - Reprovado\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &notaAluno[i]);

        if (notaAluno[i] == 1)
        {
            aprovados++;
        }
        else
        {
            reprovados++;
        }
    }

    printf("Aprovados: %d Reprovados: %d\n", aprovados, reprovados);

    for (int i = 0; i < 10; i++)
    {
        if (notaAluno[i] == 1)
        {
            printf("Aluno %d Aprovado!\n", i);
        }
        else
        {
            printf("Aluno %d Reprovado!\n", i);
        }
    }

    return 0;
}