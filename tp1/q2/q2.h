#ifndef TP_Q2_H
#define TP_Q2_H

#include <stdlib.h>
#include <stdio.h>

typedef struct t_matrix {
    int c;
    int l;
    int **mat;
} t_matrix;

int min(int a, int b);

void alloc_mat(t_matrix *matrix);

void fill_mat(t_matrix *matrix);

void display_mat(t_matrix *matrix);

t_matrix *product_mat(t_matrix *matrix1, t_matrix *matrix2);

void free_mat(t_matrix *matrix);


#endif //TP_Q2_H

