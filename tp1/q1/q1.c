#include "q1.h"

int **alloc2d_non_void(int **tab, int l, int c) {
    tab = (int **) malloc(sizeof(int *) * l);
    for (int i = 0; i < l; ++i) {
        tab[i] = (int *) malloc(sizeof(int) * c);
    }
    return tab;
}

void alloc2d_void(int ***tab, int l, int c) {
    *tab = (int **) malloc(sizeof(int *) * l);
    for (int i = 0; i < l; ++i) {
        (*tab)[i] = (int *) malloc(sizeof(int) * c);
    }
}


void fill2d(int **tab, int l, int c) {
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            scanf("%f", &tab[i][j]);
        }
    }
}

void display2d(int **tab, int l, int c) {
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%.1f ", tab[i][j]);
        }
        printf("\n");
    }
}

void free2d(int **tab, int l) {
    for (int i = 0; i < l; ++i) {
        free(tab[i]);
    }
    free(tab);
}

