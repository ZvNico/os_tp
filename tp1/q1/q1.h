#ifndef TP_Q1_H
#define TP_Q1_H

#include <stdlib.h>
#include <stdio.h>

int **alloc2d_non_void(int **tab, int l, int c);

void alloc2d_void(int ***tab, int l, int c);

void fill2d(int **tab, int l, int c);

void display2d(int **tab, int l, int c);

void free2d(int **tab, int l);

#endif //TP_Q1_H

