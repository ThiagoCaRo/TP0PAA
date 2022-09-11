#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
typedef struct{
    char asterisco;
    char cruz[3][3];
    char xis[3][3];
}Moldes;

void iniciaMoldes(Moldes *moldes);
void iniciaMoldura(char matriz[20][80]);
void preencheSimples(char matriz[20][80], int quantidade, Moldes moldes);
