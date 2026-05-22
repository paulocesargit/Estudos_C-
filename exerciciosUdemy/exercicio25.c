#include <stdio.h>

float media(float nota1, float nota2)
{
    float media;
    media = nota1 + nota2 / 2;
    return media;
}

int main()
{
    float nota1, nota2;

    printf("Digite as nota 1:");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("A media do aluno e: %.2f", media(nota1, nota2));

    return 0;
}