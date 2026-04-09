#include <stdio.h>

int main()
{
    float nota, media, soma;
    int i = 0;

    while (i <= 50)
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