#include <stdio.h>

int main()
{

    int num;

    printf("Digite um numero para saber o dia da semana (1 a 7): ");
    scanf("%d", &num);

    if (num >= 1 && num <= 7)
    {
        if (num == 1)
        {
            printf("Domingo");
        }
        else if (num == 2)
        {
            printf("Segunda");
        }
        else if (num == 3)
        {
            printf("Terca");
        }
        else if (num == 4)
        {
            printf("Quarta");
        }
        else if (num == 5)
        {
            printf("Quinta");
        }
        else if (num == 6)
        {
            printf("Sexta");
        }
        else if (num == 7)
        {
            printf("Sabado");
        }
    }
    else
    {
        printf("Numero invalido");
    }

    return 0;
}