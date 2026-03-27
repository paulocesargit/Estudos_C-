#include <stdio.h>

int main()
{
    int brancos, nulos, validos, todosVotos;
    float brancos_calculo, nulos_calculo, validos_calculo;

    printf("Digite votos brancos: ");
    scanf("%d", &brancos);

    printf("Digite votos nulos: ");
    scanf("%d", &nulos);

    printf("Digite votos validos: ");
    scanf("%d", &validos);

    todosVotos = brancos + validos + nulos;

    brancos_calculo = (brancos * 100.0) / todosVotos;
    nulos_calculo = (nulos * 100.0) / todosVotos;
    validos_calculo = (validos * 100.0) / todosVotos;

    printf("O total dos votos e: %d\n", todosVotos);

    printf("Votos em branco: %f%%\n", brancos_calculo);
    printf("votos nulo: %f%%\n", nulos_calculo);
    printf("Votos validos %f%%\n", validos_calculo);

    return 0;
}