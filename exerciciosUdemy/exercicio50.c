#include <stdio.h>

typedef union
{
    int i;
    float f;
    char c;
} valor;

int main()
{
    valor v;
    int opcao;

    printf("Digite o tipo do valor (1-int, 2-float, 3-char): ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite um inteiro: ");
        scanf("%d", &v.i);

        printf("Valor armazenado %d", v.i);
        break;
    case 2:
        printf("Digite um float: ");
        scanf("%f", &v.f);

        printf("Valor armazenado %.2f", v.f);
        break;
    case 3:
        printf("Digite um char: ");
        scanf(" %c", &v.c);

        printf("Valor armazenado %c", v.c);
        break;

    default:
        printf("Opcap invalida\n");
        break;
    }

    return 0;
}