#include <stdio.h>

int main()
{

    int ataque[4], maior = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Ataque %d: ", i + 1);
        scanf("%d", &ataque[i]);

        if (ataque[i] > maior)
        {
            maior = ataque[i];
        }
    }

    printf("O maior ataque foi o %d", maior);

    return 0;
}