#include <stdio.h>

int rbsearch(int x, int v[], int p, int u) {
  
    if (p > u) return 0;
    
    int m = (p + u) / 2;
    
    
    if (x == v[m]) return 1;
    
   
    if (x < v[m]) return rbsearch(x, v, p, m - 1);
    
 
    return rbsearch(x, v, m + 1, u);
}

int main(void) {
   
    int v[8] = {19, 27, 31, 48, 52, 66, 75, 80};
    
    printf("Procurando 80: %d\n", rbsearch(80, v, 0, 7)); 
    printf("Procurando 15: %d\n", rbsearch(15, v, 0, 7));
    
    return 0;
}