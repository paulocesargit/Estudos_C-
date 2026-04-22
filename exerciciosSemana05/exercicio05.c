#include <stdio.h>

int main()
{

    int senha = 0;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 1234)
    {
        printf("Senha incorreta tente novamente.\n");
        scanf("%d", &senha);

        senha++;
    }

    if (senha == 1234)
    {
        printf("Senha correta entrando no sistema!\n");
    }

    return 0;
}