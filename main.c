#include <stdio.h>
#include "tp1/q1/q1.h"

int main() {
    float **tab = NULL;
    int l = 2, c = 3;
    alloc2d_non_void(tab, l, c);
    fill2d(tab, l, c);
    display2d(tab, l, c);
    return 0;
}
