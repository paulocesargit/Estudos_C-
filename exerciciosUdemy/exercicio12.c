#include <stdio.h>

int main()
{

    int opc;
    float frequencia, notaFinal;

    printf("Escolha uma opcao: \n");
    printf("\n 1 Verificar se o aluno foi aprovado.\n 2 Sair\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("Digite a nota final: ");
        scanf("%d", &notaFinal);

        printf("Digite a frequencia: ");
        scanf("%d", &frequencia);

        if (notaFinal >= 7 && frequencia >= 75)
        {
            printf("Aluno Aprovado! \n");
        }
        else
        {
            printf("Aluno Reprovado! \n");
        }
        break;

    case 2:
        printf("Encerrando...\n");
        break;

    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}