#include <stdio.h>

int main()
{

    int n[5], count;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }

    for (int i = 1; i <= 5; i++)
    {

        count = 0;

        for (int j = 1; j <= 5; j++)
        {
            if (n[i] == n[j])
            {
                count++;
            }
        }
        printf("o numero %d apareceu %d vezes\n", n[i], count);
    }

    return 0;
}
