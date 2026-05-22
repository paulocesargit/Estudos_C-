#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[20];
    int idade;

    printf("Digite sua idade: ");
    scanf("%s", text);

    idade = atoi(text);

    printf("Idade: %d\n", idade);

    if (idade >= 18)
    {
        printf("De maior\n");
    }
    else
    {
        printf("De menor\n");
    }

    return 0;
}