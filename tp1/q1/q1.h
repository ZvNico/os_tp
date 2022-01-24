#ifndef TP_Q2_H
#define TP_Q1_H

#include <stdlib.h>
#include <stdio.h>

float **alloc2d_non_void(float **tab, int l, int c);

void alloc2d_void(float ***tab, int l, int c);

void fill2d(float **tab, int l, int c);

void display2d(float **tab, int l, int c);

void free2d(float **tab, int l);

#endif //TP_Q2_H

