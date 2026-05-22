#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int random;

    srand(time(NULL));

    for (int i = 0; i < 6; i++)
    {
        random = rand() % 60 + 1;
        printf(" %d", random);
    }
    return 0;
}