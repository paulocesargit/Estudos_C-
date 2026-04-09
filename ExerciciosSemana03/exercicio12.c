#include <stdio.h>

int main()
{

    int num1, num2, num3, maior, menor, meio;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    menor = num1;
    maior = num1;

    if (num2 < menor)
    {
        menor = num2;
    }
    if (num3 < menor)
    {
        menor = num3;
    }
    if (num2 > maior)
    {
        maior = num2;
    }
    if (num3 > maior)
    {
        maior = num3;
    }

    meio = num1 + num2 + num3 - menor - maior;

    printf("%d %d %d", menor, meio, maior);

    return 0;
}