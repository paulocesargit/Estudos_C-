#include <stdio.h>

int main()
{

    int opcao;
    do
    {

        printf("Escolha uma opcao\n");
        printf("1- opcao A\n 2- opcao B\n 0- sair\n");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("Vc escolheu a opcao A\n");
        }
        if (opcao == 2)
        {
            printf("Vc escolheu a opcao B\n");
        }

    } while (opcao != 0);

    printf("Vc escolheu sair");
    return 0;
}