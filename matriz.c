#include "matriz.h"


void iniciaMolduraArte(char *matriz[20][20]){
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            if(i==0 || i == 19){
                matriz[i][j] = "\U0001F7EB";
            }
            else if(j==0 || j==19){
                matriz[i][j] = "\U0001F7EB";
            }
            else{
                matriz[i][j] = " ";
            }
            //matriz[i][j] = 'o';
        }
    }
}

void iniciaMoldura(char matriz[20][80]){

    for(int i=0; i<20; i++){
        for(int j=0; j<80; j++){
            if(i==0 || i == 19){
                matriz[i][j] = '-';
            }
            else if(j==0 || j==79){
                matriz[i][j] = '|';
            }
            else{
                matriz[i][j] = ' ';
            }
            //matriz[i][j] = 'o';
        }
    }

}



void preencheSimples(char matriz[20][80], int quantidade, Moldes moldes){
    int linha, coluna;
    for(int i=0; i<quantidade; i++){
        linha = (rand() % 18) + 1;
        coluna = (rand() % 78) + 1;

        while(matriz[linha][coluna] != ' '){
            linha = (rand() % 18) + 1;
            coluna = (rand() % 78) + 1;
        }

        matriz[linha][coluna] = moldes.asterisco;

    }
}

void preencheCruz(char matriz[20][80], int quantidade, Moldes moldes){
    int linha, coluna;
    for(int i=0; i<quantidade; i++){
        linha = (rand() % 18) + 1;
        coluna = (rand() % 78) + 1;

        while(verificaMolde(matriz, linha, coluna, moldes.cruz) != true){
            linha = (rand() % 18) + 1;
            coluna = (rand() % 78) + 1;
        }

        preencheMolde(matriz, linha, coluna, moldes.cruz);
        
    }
}

void preencheXis(char matriz[20][80], int quantidade, Moldes moldes){
    int linha, coluna;
    for(int i=0; i<quantidade; i++){
        linha = (rand() % 18) + 1;
        coluna = (rand() % 78) + 1;

        while(verificaMolde(matriz, linha, coluna, moldes.xis) != true){
            linha = (rand() % 18) + 1;
            coluna = (rand() % 78) + 1;
        }

        preencheMolde(matriz, linha, coluna, moldes.xis);
        
    }
}

void preencheAleatorio(char matriz[20][80], int quantidade, Moldes moldes){
    int linha, coluna, figura;
    for(int i=0; i<quantidade; i++){
        linha = (rand() % 18) + 1;
        coluna = (rand() % 78) + 1;
        figura = (rand() % 3) +1;
        
        switch (figura){
            case 1:
                while(matriz[linha][coluna] != ' '){
                    linha = (rand() % 18) + 1;
                    coluna = (rand() % 78) + 1;
                }

                matriz[linha][coluna] = moldes.asterisco;
                break;
            
            case 2:
                while(verificaMolde(matriz, linha, coluna, moldes.cruz) != true){
                    linha = (rand() % 18) + 1;
                    coluna = (rand() % 78) + 1;
                }

                preencheMolde(matriz, linha, coluna, moldes.cruz);
                break;
            
            case 3:
                while(verificaMolde(matriz, linha, coluna, moldes.xis) != true){
                    linha = (rand() % 18) + 1;
                    coluna = (rand() % 78) + 1;
                }

                preencheMolde(matriz, linha, coluna, moldes.xis);
                break;
        }
        
    }
}

