#ifndef TP_Q2_H
#define TP_Q2_H

#include <stdlib.h>
#include <stdio.h>

typedef struct t_matrice {
    int c;
    int l;
    float **mat;
} t_matrice;

void alloc2dmat(t_matrice *t_mat);

#endif //TP_Q2_H

