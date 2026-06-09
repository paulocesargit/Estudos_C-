#include <stdio.h>

int soma(int *a, int *b)
{

    return *a + *b;
}

int main()
{

    int num1 = 3, num2 = 2;

    printf("Soma: %d\n", soma(&num1, &num2));

    return 0;
}