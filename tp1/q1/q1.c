#include "q1.h"

float **alloc2d_non_void(float **tab, int l, int c) {
    tab = (float **) malloc(sizeof(float *) * l);
    for (int i = 0; i < l; ++i) {
        tab[i] = (float *) malloc(sizeof(float) * c);
    }
    return tab;
}

void alloc2d_void(float **tab, int l, int c) {
    alloc2d_non_void(tab, l, c);
}


void fill2d(float **tab, int l, int c) {
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < l; ++j) {
            scanf("%f", &tab[i][j]);
        }
    }
}
