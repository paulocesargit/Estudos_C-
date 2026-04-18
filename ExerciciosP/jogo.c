#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char nome[50];
    int energia = 100;
    int ouro = 0;
    int opcao;

    srand(time(NULL));

    printf("Digite o nome do jogador: ");
    scanf("%s", nome);

    do {

        if(energia <= 0){
            printf("\n%s ficou sem energia... GAME OVER!\n", nome);
            break;
        }

        printf("\n===== MENU =====\n");
        printf("1 - Descansar\n");
        printf("2 - Ver Status\n");
        printf("3 - Explorar\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: {
                int energiaAntes = energia;

                energia = energia + 20;

                if(energia > 100)
                    energia = 100;

                printf("\nVoce descansou!\n");
                printf("Energia antes: %d\n", energiaAntes);
                printf("Energia atual: %d\n", energia);
                break;
            }
            case 3: {

    printf("\nExplorando...\n");

    int evento = rand() % 8;

    if(evento == 0){
        printf("Voce encontrou um bau!\n");
        ouro = ouro + 10;
    }

    else if(evento == 1){
        printf("Uma armadilha foi ativada!\n");
        energia = energia - 15;
    }

    else if(evento == 2){
        printf("Uma fonte magica restaurou energia!\n");
        energia = energia + 10;
    }

    else if(evento == 3){
        printf("Nada aconteceu...\n");
    }

    else if(evento == 4){
        printf("Voce achou muito ouro!\n");
        ouro = ouro + 30;
    }

    else if(evento == 5){
        printf("Um ladrao roubou seu ouro!\n");
        ouro = ouro - 10;

        if(ouro < 0)
            ouro = 0;
    }

    else if(evento == 6){
        printf("Voce encontrou comida!\n");
        energia = energia + 5;
    }

    else{
        printf("\nUm monstro apareceu!\n");

        int escolha;

        printf("1 - Lutar\n");
        printf("2 - Fugir\n");
        scanf("%d", &escolha);

        if(escolha == 1){
            printf("Voce venceu!\n");
            ouro = ouro + 20;
            energia = energia - 20;
        }else{
            printf("Voce fugiu!\n");
            energia = energia - 10;
        }
    }

    break;
}
            case 2:
                printf("\n--- STATUS ---\n");
                printf("Jogador: %s\n", nome);
                printf("Energia: %d\n", energia);
                printf("Ouro: %d\n", ouro);
                break;

     

            case 4:
                printf("\nSaindo do jogo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    }while(opcao != 4);

    printf("\nJogo encerrado. Ouro total: %d\n", ouro);

    return 0;
}