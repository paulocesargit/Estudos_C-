#include <stdio.h>

int main()
{

    float consumo, distancia, combustivel;

    printf("Digite a distancia pecorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite o combustivel gasto em litros: ");
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;

    printf("Consumo: %.2f\n", consumo);

    return 0;
}