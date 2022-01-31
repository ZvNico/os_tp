#ifndef TP_Q4_H
#define TP_Q4_H

#include "./../q2/q2.h"
#include "./../q3/q3.h"
#include <string.h>

int length_int(int n);

char *int_to_string(int n);

int count_size_matrix(t_matrix *matrix);

t_matrix *read_matrix(char *filename);

void *write_matrix(char *filename, t_matrix *matrix);

#endif //TP_Q4_H
