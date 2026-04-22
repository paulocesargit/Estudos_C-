#include <stdio.h>

int main() {
    int i = 1, cont = 0;

    while(i <= 50) {
        if(i % 2 == 0)
            cont++;
        i++;
    }

    printf("Quantidade de pares: %d\n", cont);

    return 0;
}