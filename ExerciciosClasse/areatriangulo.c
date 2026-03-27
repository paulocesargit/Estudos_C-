#include <stdio.h>

int main()
{

    float base, altura, area;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A area do seu retangulo e: %.2f", area);

    return 0;
}