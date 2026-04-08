#include <stdio.h>

int main()
{

    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O seu IMC e: %.2f\n", imc);

    if (imc < 18.5)
    {
        printf("Abaixo do peso");
    }
    else if (imc >= 18.5 && imc <= 25.0)
    {
        printf("Peso normal");
    }
    else if (imc >= 25.0 && imc <= 30.0)
    {
        printf("Acima do peso");
    }
    else
    {
        printf("Obeso");
    }

    return 0;
}