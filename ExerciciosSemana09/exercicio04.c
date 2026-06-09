#include <stdio.h>

float coeficiente(float total)
{
    float media;
    media = total / 3;
    return media;
}

void nomeAluno(char nome[])
{
    printf("o aluno %s", nome);
}

int main()
{
    float nota[3], soma = 0.0;
    char nome[20];

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota[i]);

        soma += nota[i];
    }

    nomeAluno(nome);
    printf("\nTeve uma media de %.2f\n", coeficiente(soma));

    return 0;
}