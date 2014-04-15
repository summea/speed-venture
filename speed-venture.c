// original code template provided by mtrigobo

#include <stdio.h>
#include <stdlib.h>

// The code you submit must have these two values.
#define N_TIMES     600000
#define ARRAY_SIZE   10000

int main (void)
{
    double  *array = calloc(ARRAY_SIZE, sizeof(double));
    double  sum = 0;
    int     i;

    // You can add variables between this comment ...
    int length = ARRAY_SIZE;
    int limit = length-31;
    double x0 = 0;
    double x1 = 0;
    double *ptr;
    // ... and this one.

    for (i = 0; i < N_TIMES; i++) {

        // You can change anything between this comment ...
        for (ptr = array; ptr < &array[limit]; ptr+=32) {
            x0 += *ptr + *(ptr+2) + *(ptr+4) + *(ptr+6) + *(ptr+8) + *(ptr+10) + *(ptr+12) + *(ptr+14) + *(ptr+16) + *(ptr+18) + *(ptr+20) + *(ptr+22) + *(ptr+24) + *(ptr+26) + *(ptr+28) + *(ptr+30);
            x1 += *(ptr+1) + *(ptr+3) + *(ptr+5) + *(ptr+7) + *(ptr+9) + *(ptr+11) + *(ptr+13) + *(ptr+15) + *(ptr+17) + *(ptr+19) + *(ptr+21) + *(ptr+23) + *(ptr+25) + *(ptr+27) + *(ptr+29) + *(ptr+31);
        }

        for (; ptr < &array[length]; ptr++)
            x0 += *ptr; // add leftover items

        sum = x0 + x1;  // important that this is just = assignment
        // ... and this one. But your inner loop must do the same
        // number of additions as this one does.

    }

    // You can add some final code between this comment ...
    free(array);
    // ... and this one.

    return 0;
}
