#include "q3.h"

int count_file_character(char *filename) {
    FILE *f = fopen(filename, "r");
    int res = 0;
    char c;
    if (f) {
        while ((c = getc(f)) != EOF) {
            res++;
        }
        fclose(f);
    } else {
        printf("Impossible d'ouvrir le fichier\n");
    }
}

char *read_file_text(char *filename) {
    FILE *f = fopen(filename, "r");
    if (f) {
        char c;
        int n = count_file_character(filename);
        char *res = (char *) malloc(sizeof(char) * n);
        for (int i = 0; i < n; ++i) {
            res[i] = getc(f);
        }
        fclose(f);
        return res;
    } else {
        return "Error: can't read file";
    }
}

void write_text_file(char *filename, char *string) {
    FILE *f = fopen(filename, "w");
    if (f) {
        fputs(string, f);
        fclose(f);
    } else {
        printf("Impossible d'ouvrir le fichier\n");
    }
}

void file_copy(char *src, char *dest) {
    write_text_file(dest, read_file_text(src));
}

void main_2() {
    file_copy("./text.txt", "./text2.txt");
}