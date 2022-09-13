#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define true 1
#define false 0

typedef struct{
    char asterisco;
    char cruz[3][3];
    char xis[3][3];
}Moldes;

typedef struct{
    char digital_art[3][3];
}Arte;

bool verificaMolde(char matriz[20][80], int linha, int coluna, char molde[3][3]);
void preencheMolde(char matriz[20][80], int linha, int coluna, char molde[3][3]);
void criaMolde(Arte *arte, int quantidade_artes);