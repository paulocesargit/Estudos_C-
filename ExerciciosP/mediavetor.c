#include <stdio.h>

int main(){
  
    float notas[5];
    float soma = 0, media;
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);

        soma = soma + notas[i];
    }
    
    media = soma / 5;

    printf("A media e: %.1f\n", media);
  
    return 0;
}