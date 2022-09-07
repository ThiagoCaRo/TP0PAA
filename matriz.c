#include "matriz.h"

void iniciaMoldura(char matriz[20][80]){
    for(int i=0;i<80;i++){
        matriz[0][i]='-';
        matriz[19][i]='-';
    }
}

//void iniciaGrids()