#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media: %.2f\n", media);

    if (media >= 7)
    {
        printf("Status: Aprovado\n");
    }
    else
    {
        printf("Status: Reprovado\n");
    }

    return 0;
}