#include "matriz.h"

void iniciaMoldes(Moldes *moldes){
    moldes->asterisco = '*';
    
    for(int a=0; a<3; a++){
        for(int b=0; b<3; b++){
            if(a == 0 || a ==2){
                moldes->cruz[a][0] = ' ';
                moldes->cruz[a][1] = '*';
                moldes->cruz[a][2] = ' ';
                break;
            }
            else if(a == 1){
                moldes->cruz[a][b] = '*';
            }
        }
    }

    for(int a=0; a<3; a++){
        if(a == 0 || a ==2){
            moldes->xis[a][0] = '*';
            moldes->xis[a][1] = ' ';
            moldes->xis[a][2] = '*';
        }
        else if(a == 1){
            moldes->xis[a][0] = ' ';
            moldes->xis[a][1] = '*';
            moldes->xis[a][2] = ' ';
        }
        
    }
}


void iniciaMoldura(char matriz[20][80]){

    for(int i=0; i<20; i++){
        for(int j=0; j<80; j++){
            matriz[i][j] = 'o';
        }
    }

    for(int j=0; j<80; j++){
        matriz[0][j] = '-';
        matriz[19][j] = '-';
    }

    for(int i=1; i<19; i++){
        matriz[i][0] = '|';
        matriz[i][79] = '|';
    }

    for(int i=0; i<20; i++){
        for(int j=0; j<80; j++){
            if(matriz[i][j] == 'o'){
                matriz[i][j] = ' ';
            }
            
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

void criaArte(char matriz[20][80], int quantidade, int quantidade_artes, Arte *arte){
    int linha, coluna, figura;

    criaMolde(arte, quantidade_artes);
    

}