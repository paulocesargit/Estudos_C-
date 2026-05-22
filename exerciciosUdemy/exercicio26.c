#include <stdio.h>

char vogal(char nome[20])
{
    int i = 0, vogais = 0;
    while (nome[i] != '\0')
    {
        if (nome[i] == 'a' || nome[i] == 'A')
        {
            vogais++;
        }
        else if (nome[i] == 'e' || nome[i] == 'E')
        {
            vogais++;
        }
        else if (nome[i] == 'i' || nome[i] == 'I')
        {
            vogais++;
        }
        else if (nome[i] == 'o' || nome[i] == 'O')
        {
            vogais++;
        }
        else if (nome[i] == 'u' || nome[i] == 'U')
        {
            vogais++;
        }

        i++;
    }

    return vogais;
}

int main()
{

    char nome[20];

    printf("Digite o nome que voce quer: ");
    scanf("%s", nome);

    printf("Seu nome tem %d vogais", vogal(nome));

    return 0;
}