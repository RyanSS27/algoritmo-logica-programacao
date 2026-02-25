#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//RA: 1840482513013

int main(void) {
    int v = 5; 
    int *p; 
    p = &v;
    *p = *p + 2;
    printf("v=%d, *p=%d\n", v, *p);
    return 0;
}