#include <stdio.h>

int main()
{

    int n;

    do
    {
        printf("Digite um numero entre 1 e 10 e ache o secreto: ");
        scanf("%d", &n);
    } while (n != 7);

    printf("Voce acertou\n");

    return 0;
}