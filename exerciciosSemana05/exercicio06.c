#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num <= 0)
    {
        printf("Numero invalido. Digite novamente:\n");
        scanf("%d", &num);
    }

    printf("Numero aceito!\n");

    return 0;
}