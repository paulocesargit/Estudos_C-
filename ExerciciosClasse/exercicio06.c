#include <stdio.h>

int main()
{

    float valorPrestacoes, totalPrestacoes, saldoRestante, pagas, restante;

    printf("coloque o total das prestaçoes: ");
    scanf("%f", &totalPrestacoes);

    printf("Quantas prestacoes ja foram pagas?");
    scanf("%f", &pagas);

    printf("qual o valor das prestaçoes?");
    scanf("%f", &valorPrestacoes);

    restante = totalPrestacoes - pagas;
    saldoRestante = restante * valorPrestacoes;

    printf("O saldo que esta faltando e: %.2f\n", saldoRestante);
    printf("Prestaçoes restantes: %d\n", restante);

    return 0;
}