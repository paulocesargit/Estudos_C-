#include <stdio.h>

int main()
{
    int score[5], record = 5000;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o score do jogador %d :", i + 1);
        scanf("%d", &score[i]);

        if (score[i] > record)
        {
            record = score[i];
            printf("Parabens! Score: %d superou o record!\n", score[i]);
        }
    }

    return 0;
}