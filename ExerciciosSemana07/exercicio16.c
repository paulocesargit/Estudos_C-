#include <stdio.h>

int main()
{
    int resultado = 0, i;
    char letra;

    for (i = 0; i <= 4; i++)
    {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        if (!((letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U')))
        {
            resultado = resultado + 1;
        }
    }

    printf("Quantidade: %d", resultado);

    return 0;
}