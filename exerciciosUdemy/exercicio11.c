#include <stdio.h>

int main()
{

    int opc;

    printf("======MENU=======\n");
    printf("Escolha uma opçao: \n");
    printf("\n1-Hamburguer\n 2-Cachorro-quante\n 3-Pizza\n 4-Sair\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("Voce escolheu o hamburguer\n");
        break;

    case 2:
        printf("Voce escolheu o cachorro quante\n");
        break;

    case 3:
        printf("Voce escolheu pizza!\n");

    case 4:
        printf("Encerrando pedido...\n");
        break;
    default:
        printf("Escolha invalida!\n");
        break;
    }

    return 0;
}