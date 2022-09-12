# include "molde.h"



typedef struct{
    char asterisco;
    char cruz[3][3];
    char xis[3][3];
}Moldes;


void iniciaMoldes(Moldes *moldes);
void iniciaMoldura(char matriz[20][80]);
void preencheSimples(char matriz[20][80], int quantidade, Moldes moldes);
void preencheCruz(char matriz[20][80], int quantidade, Moldes moldes);
void preencheXis(char matriz[20][80], int quantidade, Moldes moldes);