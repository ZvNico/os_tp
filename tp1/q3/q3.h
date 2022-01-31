#ifndef TP_Q3_H
#define TP_Q3_H

#include "stdio.h"
#include "stdlib.h"

int count_file_character(char *filename);

char *read_file_text(char *filename);

void write_text_file(char *filename, char *string);

void file_copy(char *src, char *dest);

void main_2();

#endif //TP_Q3_H
