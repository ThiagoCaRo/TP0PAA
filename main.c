#include "matriz.h"

void menu(){
    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
    printf("=================================\n");
    printf("Escolha o tipo de figura basica a ser usada para criar a obra:\n");
    printf("1 - asterisco simples.\n2 - simbolo de soma com asteriscos.\n3 - letra X com asteriscos.\n4 - figuras aleatorias\n");
    printf("5 - Monte simbolos especiais!\n");
    printf("6 - Sair\n");
    printf("=================================\n");
}


int main(){
    int op, quantidade, quantidade_artes;
    Moldes moldes;
    char quadro[20][80];
    char *quadroArte[20][40];
    srand(time(NULL));
    iniciaMoldes(&moldes);
    
    menu();
    printf("\n");
    printf("Digite a quantidade de figuras a serem geradas (menor ou igual a 0 para aleatorio): ");
    //maximo 1404 para asterisco simples
    scanf("%d", &quantidade);
    if(quantidade <= 0){
        quantidade = (rand() % 100) + 1;
    }
    while(true){
        printf("Digite o numero da opcao desejada: ");
        scanf("%d", &op);
        iniciaMoldura(quadro);
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
                preencheAleatorio(quadro, quantidade, moldes);
                break;
            case 5:
                iniciaMolduraArte(quadroArte);
                preencheArte(quadroArte);
                break;
            case 6:
                printf("Saindo do programa!!\n");
                exit(0);
                break;
        }

        printf("\n\n\n\n\n");
        if(op==5){
            for(int i=0; i<20; i++){
                printf("\n");
                for(int j=0;j<40;j++){
                    printf("%s",quadroArte[i][j]);

                }
            }
        }

        else{

        
            for(int i=0; i<20; i++){
                printf("\n");
                for(int j=0;j<80;j++){
                    printf("%c",quadro[i][j]);

                }
            }
        }
        printf("\n\n\n\n\n");
    }
    return 0;
}