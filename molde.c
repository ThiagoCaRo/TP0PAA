#include "molde.h"



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

void preencheArte(char *matriz[20][40]){
    int random;
    int count = 0;
    for(int i=1; i<19; i++){
        for(int j=1; j<39; j++){
            if(j<40-i){
                
                switch(i){
                    case 1:           
                    case 2:
                    case 3:
                    case 4:
                        random = (rand()%2)+1;
                        switch(random){
                            case 1:
                                matriz[i][j] = "\U0001F7E6";
                                break;
                            
                            case 2:
                                matriz[i][j] = "\U00002B1C";
                                break;


                        }
                        break;
                }

                switch(j){
                    
                    case 1:
                    case 11:
                        random = (rand()%2)+1;
                        switch(random){
                            case 1:
                                matriz[i][j] = "\U0001F7E6";
                                break;
                            
                            case 2:
                                matriz[i][j] = "\U00002B1C";
                                break;

                        }
                        break;

                    case 5:
                    case 6:
                    case 7:
                        if(i>7){
                            matriz[i][j] = "\U00002B1B";
                        }
                        else{
                            random = (rand()%2)+1;
                            switch(random){
                                case 1:
                                    matriz[i][j] = "\U0001F7E6";
                                    break;
                                
                                case 2:
                                    matriz[i][j] = "\U00002B1C";
                                    break;

                            }
                            break;
                        }
                    case 2:
                    case 3:
                    case 4:
                        if(matriz[i][j] != "\U0001F7E6" && matriz[i][j] != "\U00002B1C"){
                            matriz[i][j] = "\U00002B1B";
                        }
                        break;
                    case 8:
                    case 9:
                    case 10:
                        matriz[i][j] = "\U00002B1B";
                        break;
                    default:
                        random = (rand()%3)+1;
                        switch(random){
                            case 1:
                                if(matriz[i][j] != "\U0001F7E6" && matriz[i][j] != "\U00002B1C"){
                                    matriz[i][j] = "\U0001F7E6";
                                }
                                break;
                            
                            case 2:
                                if(matriz[i][j] != "\U0001F7E6" && matriz[i][j] != "\U00002B1C"){
                                    matriz[i][j] = "\U00002B1C";
                                }
                                
                                break;

                            case 3:
                                if(matriz[i][j] != "\U0001F7E6" && matriz[i][j] != "\U00002B1C"){
                                    matriz[i][j] = "\U00002B1B";
                                }
                                break;
                        }
                        break;
                    
                }

            }
            else{
            
                random = (rand() % 9) + 1;

                switch(random){
                    case 1:
                        matriz[i][j] = "\U0001F9D2";
                        break;

                    case 2:
                        matriz[i][j] = "\U0001F466";
                        break;

                    case 3:
                        matriz[i][j] = "\U0001F467";
                        break;

                    case 4:
                        matriz[i][j] = "\U0001F9D1";
                        break;

                    case 5:
                        matriz[i][j] = "\U0001F468";
                        break;

                    case 6:
                        matriz[i][j] = "\U0001F9D4";
                        break;

                    case 7:
                        matriz[i][j] = "\U0001F469";
                        break;

                    case 8:
                        matriz[i][j] = "\U0001F9D3";
                        break;

                    case 9:
                        matriz[i][j] = "\U0001F474";
                        break;

                }

            }
        }
    }


}