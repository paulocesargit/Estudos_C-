#include <stdio.h>

int main()
{

    int num1, num2, num3, iguais;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3)
    {
        iguais = 3;
    }
    else if (num1 == num2)
    {
        iguais = 2;
    }
    else if (num1 == num3)
    {
        iguais = 2;
    }
    else if (num2 == num3)
    {
        iguais = 2;
    }
    else
    {
        iguais = 0;
    }

    printf("Quantidade de numeros iguais sao: %d\n", iguais);

    return 0;
}