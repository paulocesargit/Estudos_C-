#include <stdio.h>

int main()
{

    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite um segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("O numero %d e maior", num1);
    }
    else
    {
        printf("O numero %d e maior", num2);
    }

    return 0;
}