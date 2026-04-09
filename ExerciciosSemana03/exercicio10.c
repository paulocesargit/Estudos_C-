#include <stdio.h>

int main()
{

    float numero1, numero2;
    int escolha;

    printf("ESCOLHA A OPERAÇAO:\n");
    printf("1 - SOMA \n");
    printf("2 - MULTIPLICACAO \n");
    printf("3 - DIVISAO \n");
    printf("4 - SUBTRACAO \n");
    scanf("%d", &escolha);

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch (escolha)
    {
    case 1:
    {
        float soma = numero1 + numero2;
        printf("O resultado do seu calculo e: %.2f", soma);
        break;
    }
    case 2:
    {
        float multi = numero1 * numero2;
        printf("O resultado do seu calculo e: %.2f", multi);
        break;
    }
    case 3:
    {
        float divisao = numero1 / numero2;
        printf("O resultado do seu calculo e: %.2f", divisao);
        break;
    }
    case 4:
    {
        float subtracao = numero1 - numero2;
        printf("O resultado do seu calculo e: %.2f", subtracao);
        break;
    }

    default:
        printf("Opcao invalida\n");
        break;
    }

    return 0;
}