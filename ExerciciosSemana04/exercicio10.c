#include <stdio.h>

int main()
{
    int idade, sexo, opiniao, i;
    float idademulheres = 0, fexerlente = 0, psm = 0, qtdsm = 0, mediaF, percentualM;

    for (i = 1; i <= 15; i++)
    {
        printf("Pessoa: %d\n", i);

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("Digite seu sexo: (1-F / 2-M): ");
        scanf("%d", &sexo);

        printf("Opiniao (1-nao gostei / 2-esperava mais / 3-vale / 4-excelente): ");
        scanf("%d", &opiniao);

        if (sexo == 1 && opiniao == 4)
        {
            idademulheres = idademulheres + idade;
            fexerlente++;
        }

        if (sexo == 2 && opiniao == 1)
        {
            psm++;
        }

        if (opiniao == 2)
        {
            qtdsm++;
        }
    }

    if (fexerlente > 0)
        mediaF = idademulheres / fexerlente;
    else
        mediaF = 0;

    percentualM = (psm / 15) * 100;

    printf("Media de idade (mulheres excelente): %.2f\n", mediaF);
    printf("Percentual homens que nao gostaram: %.2f%%\n", percentualM);
    printf("Pessoas que esperavam mais: %d\n", qtdsm);

    return 0;
}