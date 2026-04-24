#include <stdio.h>

int main()
{
    int canal, pessoas;
    float pglobo = 0, psbt = 0, predetv = 0, precord = 0, total = 0, sbt = 0, record = 0, globo = 0, redetv = 0;
    do
    {
        printf("Escolha um canal: \n");
        printf("1 - SBT \n");
        printf("2 - RECORD \n");
        printf("3 - GLOBO \n");
        printf("4 - REDE-TV \n");
        printf("5 - SAIR \n");
        scanf("%d", &canal);

        if (canal >= 1 && canal <= 4)
        {

            printf("digite a quantidade de pessoas assistindo: ");
            scanf("%d", &pessoas);

            if (canal == 1)
            {
                sbt = sbt + pessoas;
            }
            else if (canal == 2)
            {
                record = record + pessoas;
            }
            else if (canal == 3)
            {
                globo = globo + pessoas;
            }
            else if (canal == 4)
            {
                redetv = redetv + pessoas;
            }

            total = total + pessoas;
        }

    } while (canal != 5);

    if (sbt >= record && sbt >= globo && sbt >= redetv)
    {
        printf("A maior audiencia e o SBT\n");
    }
    else if (record >= globo && record >= redetv)
    {
        printf("A maior audiencia e a Record\n");
    }
    else if (globo >= redetv)
    {
        printf("A maior audiencia e da globo\n");
    }
    else
    {
        printf("A  maior audiencia e da RedeTV\n");
    }

    if (sbt <= record && sbt <= globo && sbt <= redetv)
    {
        printf("A menor audiencia e o SBT\n");
    }
    else if (record <= globo && record <= redetv)
    {
        printf("A menor audiencia e a Record\n");
    }
    else if (globo <= redetv)
    {
        printf("A menor audiencia e da globo\n");
    }
    else
    {
        printf("A menor audiencia e da RedeTV\n");
    }

    printf("O percentual dos canais!\n");

    pglobo = (globo / total) * 100;
    psbt = (sbt / total) * 100;
    precord = (record / total) * 100;
    predetv = (redetv / total) * 100;

    printf("SBT %.2f%%\n", psbt);
    printf("RECORD %.2f%%\n", precord);
    printf("GLOBO %.2f%%\n", pglobo);
    printf("REDETV %.2f%%\n", predetv);

    return 0;
}
