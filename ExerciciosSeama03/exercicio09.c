#include <stdio.h>

int main()
{

    char sexo;

    printf("Digite seu sexo M ou F: ");
    scanf("%c", &sexo);

    if (sexo == 'M' && sexo == 'm')
    {
        printf("Masculino");
    }
    else if (sexo == 'F' && sexo == 'f')
    {
        printf("Feminino");
    }
    else
    {
        printf("Sexo invalido!");
    }

    return 0;
}