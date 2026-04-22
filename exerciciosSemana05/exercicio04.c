#include <stdio.h>

int main()
{
    int num, soma = 0;

    printf("Digite numeros (0 para parar): ");
    scanf("%d", &num);

    while (num != 0)
    {
        soma = soma + num;
        scanf("%d", &num);
    }

    printf("Soma = %d\n", soma);

    return 0;
}
