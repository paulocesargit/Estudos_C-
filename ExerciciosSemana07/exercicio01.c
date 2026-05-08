#include <stdio.h>

int main()
{
    int opcao;

    char nomeR[20], senhaR[30];
    char nome[20], senha[30];

    do
    {
        printf("\n===== SISTEMA =====\n");
        printf("1 - Cadastrar\n");
        printf("2 - Login\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            char confirmSenha[30];

            int i = 0;
            int diferente = 0;

            printf("\nDigite seu nome: ");
            scanf("%s", nomeR);

            printf("Digite a senha: ");
            scanf("%s", senhaR);

            printf("Confirme a senha: ");
            scanf("%s", confirmSenha);

            while (senhaR[i] != '\0' || confirmSenha[i] != '\0')
            {
                if (senhaR[i] != confirmSenha[i])
                {
                    diferente = 1;
                    break;
                }

                i++;
            }

            if (diferente == 1)
            {
                printf("Senhas diferentes!\n");
            }
            else
            {
                printf("Usuario cadastrado com sucesso!\n");
            }
        }

        else if (opcao == 2)
        {
            int i = 0;

            int nomeErrado = 0;
            int senhaErrada = 0;

            printf("\nDigite seu nome: ");
            scanf("%s", nome);

            printf("Digite sua senha: ");
            scanf("%s", senha);

            while (nome[i] != '\0' || nomeR[i] != '\0')
            {
                if (nome[i] != nomeR[i])
                {
                    nomeErrado = 1;
                    break;
                }

                i++;
            }

            i = 0;

            while (senha[i] != '\0' || senhaR[i] != '\0')
            {
                if (senha[i] != senhaR[i])
                {
                    senhaErrada = 1;
                    break;
                }

                i++;
            }

            if (nomeErrado == 1 || senhaErrada == 1)
            {
                printf("Nome ou senha incorretos!\n");
            }
            else
            {
                printf("Login realizado com sucesso!\n");
            }
        }

        else if (opcao != 0)
        {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("Saindo...\n");

    return 0;
}