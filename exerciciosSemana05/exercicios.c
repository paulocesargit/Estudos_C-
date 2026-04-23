// 1
#include <stdio.h>

int main()
{
    int num = 0;

    while (num < 10)
    {
        num = num + 1;
        printf(" %d\n", num);
    }

    return 0;
}
// 2
#include <stdio.h>

int main()
{
    int numero = 0, i, result = 0;

    printf("Digite um numero para saber a sua tabuada: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++)
    {
        result = numero * i;
        printf("Tabuada %d x %d = %d\n", numero, i, result);
    }

    return 0;
}
// 3
#include <stdio.h>

int main()
{
    int i = 1, cont = 0;

    while (i <= 50)
    {
        if (i % 2 == 0)
        {
            cont++;
        }
        i++;
    }

    printf("Quantidade de pares: %d\n", cont);

    return 0;
}
// 4
#include <stdio.h>

int main()
{
    int num, soma = 0;

    printf("Digite numeros / 0 para parar: ");
    scanf("%d", &num);

    while (num != 0)
    {
        soma = soma + num;
        scanf("%d", &num);
    }

    printf("Soma = %d\n", soma);

    return 0;
}
// 5
#include <stdio.h>

int main()
{

    int senha = 0;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 1234)
    {
        printf("Senha incorreta tente novamente.\n");
        scanf("%d", &senha);

        senha++;
    }

    if (senha == 1234)
    {
        printf("Senha correta entrando no sistema!\n");
    }

    return 0;
}
// 6
#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num <= 0)
    {
        printf("Numero invalido. Digite novamente:\n");
        scanf("%d", &num);
    }

    printf("Numero aceito!\n");

    return 0;
}
// 7
#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
// 8
#include <stdio.h>

int main()
{
    int numeros, i = 0;
    float media = 0, soma = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros);

        soma = soma + numeros;
        i++;

    } while (numeros != -1);

    media = soma / i;

    printf("A Media dos numeros digitados e: %.2f", media);

    return 0;
}
// 9
#include <stdio.h>

int main()
{

    int opcao;
    do
    {

        printf("Escolha uma opcao\n");
        printf("1- opcao A\n 2- opcao B\n 0- sair\n");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("Vc escolheu a opcao A\n");
        }
        if (opcao == 2)
        {
            printf("Vc escolheu a opcao B\n");
        }

    } while (opcao != 0);

    printf("Vc escolheu sair");
    return 0;
}
// 10
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
// 11
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
// 12
#include <stdio.h>

int main()
{
    int i, num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        soma = soma + num;
    }

    printf("Resultado: %d", soma);

    return 0;
}
// 13
#include <stdio.h>

int main()
{
    int numero = 1, i, result = 0;

    while (numero <= 5)
    {
        for (i = 1; i <= 10; i++)
        {
            result = numero * i;
            printf("Tabuada %d x %d = %d\n", numero, i, result);
        }
        numero++;
    }

    return 0;
}
// 14
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
            i++;
        }
    }

    return 0;
}
// 15
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

    printf("O percentual dos canais!");

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