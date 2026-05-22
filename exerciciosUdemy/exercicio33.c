#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp[] = "25.7";
    float temperature;

    temperature = atof(temp);

    if (temperature < 18.0)
    {
        printf("Esta frio!\n");
    }
    else if (temperature >= 18.0 && temperature < 26)
    {
        printf("Agradavel");
    }
    else
    {
        printf("Quente!");
    }

    return 0;
}