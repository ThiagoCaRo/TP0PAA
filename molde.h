#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define true 1
#define false 0

bool verificaMolde(char matriz[20][80], int linha, int coluna, char molde[3][3]);
void preencheMolde(char matriz[20][80], int linha, int coluna, char molde[3][3]);