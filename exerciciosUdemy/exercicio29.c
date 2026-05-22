#include <stdio.h>

void quadrado(int n, char asterisco)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (asterisco == '*')
            {
                printf("* ");
            }
            else if (asterisco == '#')
            {
                printf("# ");
            }
            else if (asterisco == '&')
            {
                printf("& ");
            }
            else if (asterisco == '$')
            {
                printf("$ ");
            }
        }
        printf("\n");
    }
}

int main()
{
    char asterisco;
    int n;

    printf("Digite o n do quadrado que voce quer: ");
    scanf("%d", &n);

    printf("Digite o asterisco que voce quer ($,#,&,*): ");
    scanf(" %c", &asterisco);

    quadrado(n, asterisco);

    return 0;
}