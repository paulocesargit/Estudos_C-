#include <stdio.h>

int main()
{
    char login[10] = "paulo", senha[10] = "123", logindigitado[10], senhadigitada[10];
    int tentativas = 0;

    while (tentativas < 3)
    {

        printf("Digite o login: ");
        scanf("%s", logindigitado);

        printf("Digite a senha: ");
        scanf("%s", senhadigitada);

        int i = 0, senhacorreta = 1, logincorreto = 1;

        while (senha[i] != '\0' || senhadigitada[i] != '\0')
        {

            if (senha[i] != senhadigitada[i])
            {
                senhacorreta = 0;
                break;
            }
            i++;
        }

        i = 0;

        while (login[i] != '\0' || logindigitado[i] != '\0')
        {
            if (login[i] != logindigitado[i])
            {
                logincorreto = 0;
                break;
            }
            i++;
        }

        if (logincorreto == 1 && senhacorreta == 1)
        {
            printf("Logando no sistema...");
            break;
        }
        else
        {
            printf("Senha ou login incorretos\n");
            tentativas++;
        }
    }

    if (tentativas == 3)
    {
        printf("Acesso bloqueado!\n");
    }

    return 0;
}