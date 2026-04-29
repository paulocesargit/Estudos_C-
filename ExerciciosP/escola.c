#include <stdio.h>

int main()
{
    const int bimestres = 3;
    const int alunosEscola = 4;

    float notasAlunos[alunosEscola][bimestres];
    float media;

    // Entrada de dados
    for (int alunos = 0; alunos < alunosEscola; alunos++)
    {
        printf("\nAluno %d:\n", alunos + 1);

        for (int notas = 0; notas < bimestres; notas++)
        {
            printf("Digite a nota do %d bimestre: ", notas + 1);
            scanf("%f", &notasAlunos[alunos][notas]);
        }
    }

    // Cálculo da média de cada aluno
    for (int alunos = 0; alunos < alunosEscola; alunos++)
    {
        media = 0; // zera antes de calcular cada aluno

        for (int notas = 0; notas < bimestres; notas++)
        {
            media += notasAlunos[alunos][notas];
        }

        media = media / bimestres;

        printf("Media do aluno %d: %.2f\n", alunos + 1, media);
    }

    return 0;
}