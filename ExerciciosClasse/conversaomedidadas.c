#include <stdio.h>

int main()
{

    float metros, centrimetros, milimetros;

    printf("Digite os metros para ser convertido!  ");
    scanf("%f", &metros);

    centrimetros = metros * 100;
    milimetros = metros * 1000;

    printf("Os centrimentros sao: %.2f\n", centrimetros);
    printf("Os milimetros sao: %.2f\n", milimetros);

    return 0;
}