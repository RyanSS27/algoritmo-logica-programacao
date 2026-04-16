#include <stdio.h>

int rlsearch(int x, int v[], int n) {
    
    if (n == 0) return 0;
    
  
    if (v[n - 1] == x) return 1;
    
  
    return rlsearch(x, v, n - 1);
}

int main(void) {
    int v[8] = {66, 80, 31, 48, 27, 75, 19, 52};
    
    printf("Procurando 75: %d\n", rlsearch(75, v, 8));
    printf("Procurando 10: %d\n", rlsearch(10, v, 8));
    
    return 0;
}