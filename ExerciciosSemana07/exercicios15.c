#include <stdio.h>

int main()
{
    int i = 0, soma = 0;
    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    int letraT = 0, LetraI = 0, LetraA = 0;

    while (nome[i] != '\0')
    {
        for (int j = 0; j <= nome[i]; j++)
        {
            if (nome[i] == 't')
            {
                letraT++;
                break;
            }

            if (nome[i] == 'i')
            {
                LetraI += 2;
                break;
            }

            if (nome[i] == 'a')
            {
                LetraA += 3; // esqueci de colocar o += 2 e +=3
                break;       // esqueci de colocar o break
            }
        }

        i++;
    }

    soma = letraT + LetraI + LetraA;

    printf("Resultado: %d", soma);

    return 0;
}