#include <stdio.h>

int main()
{
    int curso;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &curso);

    switch (curso)
    {
    case 1:
        printf("Curso de ADS\n");
        break;
    case 2:
        printf("Curso de Jogos Digitais\n");
        break;
    case 3:
        printf("Curso de Moda\n");
        break;
    case 4:
        printf("Curso de Gastronomia\n");
        break;
    case 5:
        printf("Curso de Gestao\n");
        break;
    case 6:
        printf("Curso de Enfermagem\n");
        break;
    case 7:
        printf("Curso de Estetica\n");
        break;
    default:
        printf("Voce nao pertence a curso algum da Faculdade Senac\n");
        break;
    }

    return 0;
}