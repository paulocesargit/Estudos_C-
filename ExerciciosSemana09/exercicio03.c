#include <stdio.h>

void mostrarAluno(char aluno[])
{
    printf("%s", aluno);
}

int main()
{
    char aluno[10];

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno);

    mostrarAluno(aluno);

    return 0;
}