#include <stdio.h>
#include <math.h>

int main()
{

    float salario1, salario2, diferenca;

    printf("Dgite o salario do jogador1: ");
    scanf("%f", &salario1);

    printf("Digite o salario do jogador 2: ");
    scanf("%f", &salario2);

    diferenca = fabs(salario1 - salario2); // funçao para tirar valores negativos independente da posiçao do maior e menor valor, valor absoluto

    printf("A diferenca entre salario do jogador 1 %.2f e jogador 2 %.2f e: %.2f \n", salario1, salario2, diferenca);

    return 0;
}