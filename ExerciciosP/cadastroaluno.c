#include <stdio.h>

int main()
{

    char nomes[5][30];
    float notas[5];
    int i, opcao, quantidade = 0;

    while (1)
    {

        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Mostrar alunos\n");
        printf("3 - Verificar aprovacao\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 4)
        {
            printf("Encerrando programa...\n");
            break;
        }

        switch (opcao)
        {

        case 1:
            if (quantidade < 5)
            {
                printf("Digite o nome do aluno: ");
                scanf("%s", nomes[quantidade]);

                printf("Digite a nota: ");
                scanf("%f", &notas[quantidade]);

                quantidade++;
            }
            else
            {
                printf("Limite de alunos atingido!\n");
            }
            break;

        case 2:
            printf("\nLista de alunos:\n");

            for (i = 0; i < quantidade; i++)
            {
                printf("Aluno: %s - Nota: %.1f\n", nomes[i], notas[i]);
            }
            break;

        case 3:
            for (i = 0; i < quantidade; i++)
            {

                if (notas[i] >= 6)
                {
                    printf("%s esta APROVADO\n", nomes[i]);
                }
                else if (notas[i] == 5)
                {
                    printf("%s ficou de Recuperacao\n", nomes[i]);
                }
                else
                {
                    printf("%s esta REPROVADO\n", nomes[i]);
                }
            }
            break;
            return 0;

        default:
            printf("Opcao invalida!\n");
        }
    }
}
