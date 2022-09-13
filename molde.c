#include "molde.h"



bool verificaMolde(char matriz[20][80], int linha, int coluna, char molde[3][3]){
    
    if(matriz[linha][coluna] != ' '){
        return false;
    }


    if(linha == 1 || linha != 18){//Para a linha 1
        
        if(coluna == 1 || coluna != 78){//Para coluna 1
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                
                    if(molde[i][j]!=' '){
                        if(matriz[linha+i][coluna+j] != ' ' || 
                            matriz[linha+i][coluna+j] == '|' || matriz[linha+i][coluna+j] == '-'){
                            return false;
                        }
                    }
                }
            }
        }//Termina coluna 1 ou diferente de 78

        
        else if(coluna == 78){//Para coluna 78
            for(int i=0; i<3; i++){
                for(int j=2; j>=0; j--){
                
                    if(molde[i][j]!=' '){
                        switch(j){
                            case 2:
                                if(matriz[linha+i][coluna-0] != ' '){
                                    return false;
                                }
                                break;
                            case 1:
                                if(matriz[linha+i][coluna-1] != ' '){
                                     false;
                                }
                                break;
                            case 0:
                                if(matriz[linha+i][coluna-2] != ' '){
                                    return false;
                                }
                                break;
                        }
                    }
                }
            }
        }//Termina coluna 78
    }//Termina linha 1


    else if(linha == 18){//Para linha 18
        if(coluna ==1 || coluna != 78){//Para coluna 1
            for(int i=2; i>=0; i--){
                for(int j=0; j<3; j++){
                

                    if(molde[i][j] != ' '){
                        switch(i){
                            case 2:
                                if(matriz[linha-0][coluna+j] != ' ' || 
                                    matriz[linha-0][coluna+j] == '|' || matriz[linha-0][coluna+j] == '-'){
                                    return false;
                                }
                                break;
                            case 1:
                                if(matriz[linha-1][coluna+j] != ' ' ||
                                    matriz[linha-1][coluna+j] == '|' || matriz[linha-1][coluna+j] == '-'){
                                    return false;
                                }
                                break;
                            case 0:
                                if(matriz[linha-2][coluna+j] != ' ' ||
                                    matriz[linha-2][coluna+j] == '|' || matriz[linha-2][coluna+j] == '-'){
                                    return false;
                                }
                                break;
                        }
                    }
                }
            }
        }

        else if(coluna == 78){
            for(int i=2; i>=0; i--){
                for(int j=2; j>=0; j--){
                    if(molde[i][j] != ' '){

                        if(i==2){
                            if(j==2){
                                if(matriz[linha-0][coluna-0] != ' ')
                                    return false;
                            }

                            else if(j==1){
                                if(matriz[linha-0][coluna-1] != ' ')
                                    return false;
                            }

                            else{
                                if(matriz[linha-0][coluna-2] != ' ')
                                    return false;
                            }
                        }

                        else if(i==1){
                            if(j==2){
                                if(matriz[linha-1][coluna-0] != ' ')
                                    return false;
                            }

                            else if(j==1){
                                if(matriz[linha-1][coluna-1] != ' ')
                                    return false;
                            }

                            else{
                                if(matriz[linha-1][coluna-2] != ' ')
                                    return false;
                            }
                            
                        }

                        else{
                            if(j==2){
                                if(matriz[linha-2][coluna-0] != ' ')
                                    return false;
                            }

                            else if(j==1){
                                if(matriz[linha-2][coluna-1] != ' ')
                                    return false;
                            }

                            else{
                                if(matriz[linha-2][coluna-2] != ' ')
                                    return false;
                            }
                            
                        }
                    }
                }
            }
        }
    }//Termina linha 18

    /*else{//Para qualquer outra linha

        if(coluna == 1 || coluna != 78){//Para coluna 1
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                
                    if(molde[i][j]!=' '){
                        if(matriz[linha+i][coluna+j] != ' ' || 
                            matriz[linha+i][coluna+j] == '|' || matriz[linha+i][coluna+j] == '-'){
                            return false;
                        }
                    }
                }
            }
        }//Termina coluna 1 ou diferente de 78

        
        else if(coluna == 78){//Para coluna 78
            for(int i=0; i<3; i++){
                for(int j=2; j>=0; j--){
                
                    if(molde[i][j]!=' '){
                        switch(j){
                            case 2:
                                if(matriz[linha+i][coluna-0] != ' '){
                                    return false;
                                }
                                break;
                            case 1:
                                if(matriz[linha+i][coluna-1] != ' '){
                                     false;
                                }
                                break;
                            case 0:
                                if(matriz[linha+i][coluna-2] != ' '){
                                    return false;
                                }
                                break;
                        }
                    }
                }
            }
        }//Termina coluna 78


    }//Termina para qualquer outra linha*/

    return true;

}

void preencheMolde(char matriz[20][80], int linha, int coluna, char molde[3][3]){
    
    if(linha == 1 || linha != 18){
        if(coluna == 1 || coluna !=78){
            for(int i=0 ; i<3; i++){
                for(int j=0; j<3; j++){
                    if(molde[i][j] != ' '){
                        matriz[linha+i][coluna+j] = molde[i][j];
                    }
                }
            }
        }

        else if(coluna == 78){
            for(int i=0; i<3; i++){
                for(int j=2; j>=0; j--){
                
                    if(molde[i][j]!=' '){
                        switch(j){
                            case 2:
                                matriz[linha+i][coluna-0] = molde[i][j];
                                break;
                            case 1:
                                matriz[linha+i][coluna-1] = molde[i][j];
                                break;
                            case 0:
                                matriz[linha+i][coluna-2] = molde[i][j];
                                break;
                        }
                    }
                }
            }
        }//Termina coluna 78
        

    }//Termina linha igual a 1 ou diferente de 18

    else if(linha == 18){

        if(coluna ==1 || coluna != 78){//Para coluna 1
            for(int i=2; i>=0; i--){
                for(int j=0; j<3; j++){
                
                    if(molde[i][j] != ' '){
                        switch(i){
                            case 2:
                                matriz[linha-0][coluna+j] = molde[i][j];
                                break;
                            case 1:
                                matriz[linha-1][coluna+j] = molde[i][j];
                                break;
                            case 0:
                                matriz[linha-2][coluna+j] = molde[i][j];
                                break;
                        }
                    }
                }
            }
        }//Termina coluna 1

        else if(coluna == 78){ 
            for(int i=2; i>=0; i--){
                for(int j=2; j>=0; j--){
                    if(molde[i][j] != ' '){

                        if(i==2){
                            if(j==2){
                                matriz[linha-0][coluna-0] = molde[i][j];
                            }

                            else if(j==1){
                                matriz[linha-0][coluna-1] = molde[i][j];
                            }

                            else{
                                matriz[linha-0][coluna-2] = molde[i][j];
                            }
                        }

                        else if(i==1){
                            if(j==2){
                                matriz[linha-1][coluna-0] = molde[i][j];
                            }

                            else if(j==1){
                                matriz[linha-1][coluna-1] = molde[i][j];
                            }

                            else{
                                matriz[linha-1][coluna-2] = molde[i][j];
                            }
                            
                        }

                        else{
                            if(j==2){
                                matriz[linha-2][coluna-0] = molde[i][j];
                            }

                            else if(j==1){
                                matriz[linha-2][coluna-1] = molde[i][j];
                            }

                            else{
                                matriz[linha-2][coluna-2] = molde[i][j];
                            }
                            
                        }
                    }
                }
            }
        
        }


    }
}

void criaMolde(Arte *arte, int quantidade_artes){

    for(int quantidade = 0; quantidade < quantidade_artes; quantidade++){
        printf("Quais elementos do frame abaixo deseja preencher?\n");
        printf("  1  2  3\n");
        printf("  -------\n");
        printf("1 |º º º|\n2 |º º º|\n3 |º º º|\n");
        printf("  -------\n");
    }
}