# include "molde.h"


void iniciaMoldes(Moldes *moldes);
void iniciaMoldura(char matriz[20][80]);
void preencheSimples(char matriz[20][80], int quantidade, Moldes moldes);
void preencheCruz(char matriz[20][80], int quantidade, Moldes moldes);
void preencheXis(char matriz[20][80], int quantidade, Moldes moldes);
void preencheAleatorio(char matriz[20][80], int quantidade, Moldes moldes);
void criaArte(char matriz[20][80], int quantidade, int quantidade_artes, Arte *arte);