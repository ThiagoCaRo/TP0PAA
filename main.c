#include "matriz.h"

void menu(){
    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
    printf("=================================\n");
    printf("Escolha o tipo de figura basica a ser usada para criar a obra:\n");
    printf("1 - asterisco simples.\n2 - simbolo de soma com asteriscos.\n3 - letra X com asteriscos.\n4 - figuras aleatorias\n");
    printf("5 - Monte simbolos especiais!\n");
    printf("=================================\n");
}


int main(){
    int op, quantidade;
    char quadro[20][80];
    iniciaMoldura(quadro);
    menu();
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &op);
    printf("\n");
    printf("Digite a quantidade de figuras a serem geradas (menor ou igual a 0 para aleatorio): ");
    scanf("%d", &quantidade);
    switch(op){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
    }
    return 0;
}