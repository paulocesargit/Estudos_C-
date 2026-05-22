#include <stdio.h>

int numeros(int num1, int num2, int num3)
{
    int maior;
    if (num1 >= num2 && num1 >= num3)
    {
        maior = num1;
    }
    else if (num2 >= num3)
    {
        maior = num2;
    }
    else
    {
        maior = num3;
    }

    return maior;
}

int main()
{

    int num1, num2, num3;

    printf("digite 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("O maior entre eles e: %d", numeros(num1, num2, num3));

    return 0;
}