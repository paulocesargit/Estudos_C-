#include <stdio.h>

int main() {
    int num, maior = 0;

    printf("Digite numeros positivos (0 para parar):\n");

    scanf("%d", &num);

    while(num != 0) {
        if(num > maior) {
            maior = num;
        }
        scanf("%d", &num);
    }

    printf("Maior numero: %d\n", maior);

    return 0;
}