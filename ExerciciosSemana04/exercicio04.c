#include <stdio.h>

int main()
{

    float nota, media, soma;
    int i = 0;

    for (i = 0; i <= 50; i++)
    {
        printf("Digite sua nota: ");
        scanf("%f", &nota);

        soma = soma + nota;
        i++;
    }

    media = soma / 50;

    printf("Media da turma e: %.2f\n", media);

    return 0;
}