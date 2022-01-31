#include "q2.h"
#include "./../q1/q1.h"

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

void alloc_mat(t_matrix *matrix) {
    alloc2d_void(&matrix->mat, matrix->l, matrix->c);
}

void fill_mat(t_matrix *matrix) {
    fill2d(matrix->mat, matrix->l, matrix->c);
}


void display_mat(t_matrix *matrix) {
    display2d(matrix->mat, matrix->l, matrix->c);
}

t_matrix *product_mat(t_matrix *matrix1, t_matrix *matrix2) {
    t_matrix *matrix = (t_matrix *) malloc(sizeof(t_matrix));
    int l = min(matrix1->l, matrix2->l), c = min(matrix1->c, matrix2->c);
    matrix->l = l, matrix->c = c;
    alloc_mat(matrix);
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            matrix->mat[i][j] = 0;
            for (int k = 0; k < matrix1->c; ++k) {
                matrix->mat[i][j] += matrix1->mat[i][k] * matrix2->mat[k][j];
            }
        }
    }
    return matrix;
}

void free_mat(t_matrix *matrix) {
    free2d(matrix->mat, matrix->l);
}

