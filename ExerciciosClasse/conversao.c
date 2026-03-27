#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%f", fahrenheit);
    return 0;
}