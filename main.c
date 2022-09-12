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
    Moldes moldes;
    char quadro[20][80];

    iniciaMoldes(&moldes);
    iniciaMoldura(quadro);
    menu();
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &op);
    printf("\n");
    printf("Digite a quantidade de figuras a serem geradas (menor ou igual a 0 para aleatorio): ");
    //maximo 1404 para asterisco simples
    scanf("%d", &quantidade);
    switch(op){
        case 1:
            preencheSimples(quadro, quantidade, moldes);
            break;
        case 2:
            preencheCruz(quadro, quantidade, moldes);
            break;
        case 3:
            preencheXis(quadro, quantidade, moldes);
            break;
        case 4:
            break;
        case 5:
            break;
    }

    printf("\n\n\n\n\n");
    for(int i=0; i<20; i++){
        printf("\n");
        for(int j=0;j<80;j++){
            printf("%c",quadro[i][j]);
        }
    }
    printf("\n\n\n\n\n");
    return 0;
}