// Você foi contratado por uma emissora de TV para fazer um software em C pra trabalhar com os dados da chuva em sua cidade. Seu vetor de 7 posições deve armazenar quanto choveu em cada dia. Em seguida, deve dizer que dia choveu mais, o dia que choveu menos, o tanto que choveu na semana e a média, para exibir na TV.

#include <stdio.h>

int main()
{
    float chuva[7];
    float soma = 0, media;
    float maior, menor;
    int diaMaior = 0, diaMenor = 0;

    for (int i = 0; i < 7; i++)
    {
        printf("Digite a chuva do dia %d: ", i + 1);
        scanf("%f", &chuva[i]);

        soma += chuva[i];

        if (i == 0)
        {
            maior = menor = chuva[i];
        }
        else
        {
            if (chuva[i] > maior)
            {
                maior = chuva[i];
                diaMaior = i;
            }

            if (chuva[i] < menor)
            {
                menor = chuva[i];
                diaMenor = i;
            }
        }
    }

    media = soma / 7;

    printf("\nTotal da semana: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior chuva: %.2f no dia %d\n", maior, diaMaior + 1);
    printf("Menor chuva: %.2f no dia %d\n", menor, diaMenor + 1);

    return 0;
}