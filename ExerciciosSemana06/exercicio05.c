#include <stdio.h>

int main()
{

    float v[10], soma = 0, media = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota[%d]: \n", i + 1);
        scanf("%d", &v[i]);

        soma += v[i];
    }

    media = soma / 10;

    printf("A media dos alunos e: %.2f", media);

    return 0;
}