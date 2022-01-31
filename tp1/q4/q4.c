#include "q4.h"

int length_int(int n) {
    if (n < 10) {
        return 1;
    }
    return 1 + n / 10;
}

char *int_to_string(int n) {
    int len = length_int(n);
    char *s = (char *) malloc(sizeof(char) * len);
    int r;
    for (int i = 0; i < len; ++i) {
    }
}

int count_size_matrix(t_matrix *matrix) {
    int c = 0;
    c += length_int(matrix->l);
    c++;
    c += length_int(matrix->c);
    c++;
    for (int i = 0; i < matrix->l; ++i) {
        for (int j = 0; j < matrix->l; ++j) {
            c += length_int(matrix->mat[i][j]);
            c++;
        }
    }
    return c;
}


t_matrix *read_matrix(char *filename) {

}

void *write_matrix(char *filename, t_matrix *matrix) {
    FILE *f = fopen(filename, "w");
    if (f) {
        int n = count_size_matrix(matrix);
        for (int i = 0; i < n; ++i) {
            fputc('d', f);
        }

    }
}
