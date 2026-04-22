#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite numeros (0 para parar): ");
    scanf("%d", &num);

    while(num != 0) {
        soma += num;
        scanf("%d", &num);
    }

    printf("Soma = %d\n", soma);

    return 0;
}

/* #include <stdio.h>

int main() {
    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    while(num < 0) {
        printf("Numero invalido. Digite novamente: ");
        scanf("%d", &num);
    }

    printf("Numero aceito!\n");

    return 0;
} */
