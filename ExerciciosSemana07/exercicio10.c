#include <stdio.h>

int main()
{

    int num[5], digit;

    printf("Digite 5 numeros (um por vez): \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Digite o um numero para saber se exite ou nao no vetor: \n");
    scanf("%d", &digit);

    for (int i = 0; i < 5; i++)
    {
        if (digit == num[i])
        {
            printf("Numero encontrado no vetor!\n");
            printf("Posicao dele: %d\n", i + 1);
        }
    }

    printf("Esse numero nao tem no vetor!");

    return 0;
}