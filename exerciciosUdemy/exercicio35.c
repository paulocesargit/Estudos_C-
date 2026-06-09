#include <stdio.h>

float meidaFps(int total)
{
    float media;

    media = total / 6;

    return media;
}

int main()
{
    int fps[6], total = 0;
    float media = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o fps do momemnto %d: ", i + 1);
        scanf("%d", &fps[i]);

        total += fps[i];
    }

    media = meidaFps(total);

    printf("A media de FPS e: %.2f", media);

    return 0;
}