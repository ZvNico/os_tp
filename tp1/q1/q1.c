#include "q1.h"

float **alloc2d_non_void(float **tab, int l, int c) {
    tab = (float **) malloc(sizeof(float *) * l);
    for (int i = 0; i < l; ++i) {
        tab[i] = (float *) malloc(sizeof(float) * c);
    }
    return tab;
}

void alloc2d_void(float ***tab, int l, int c) {
    *tab = (float **) malloc(sizeof(float *) * l);
    for (int i = 0; i < l; ++i) {
        (*tab)[i] = (float *) malloc(sizeof(float) * c);
    }
}


void fill2d(float **tab, int l, int c) {
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            scanf("%f", &tab[i][j]);
        }
    }
}

void display2d(float **tab, int l, int c) {
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%f", tab[i][j]);
        }
    }
}

void free2d(float **tab, int l) {
    for (int i = 0; i < l; ++i) {
        free(tab[i]);
    }
    free(tab);
}

