#include <stdio.h>

int main()
{

    float valorH, salarioTotal, horasT;

    printf("Digite suas horas trabalhadas: ");
    scanf("%f", &horasT);

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valorH);

    salarioTotal = horasT * valorH;

    printf("Seu salario e: %.2f", salarioTotal);

    return 0;
}