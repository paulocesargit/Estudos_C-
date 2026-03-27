#include <stdio.h>

int main()
{

    float nota1, nota2, nota3, resul;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    resul = (nota1 + nota2 + nota3) / 3;

    printf("A sua media e: %.2f", resul);

    return 0;
}