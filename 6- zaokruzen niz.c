#include <stdio.h>
#include <math.h>

void zaokruzi(double *p1, int  n){
    double *p2=p1+n;
    while (p1< p2){
        *p1=round((*p1)*10)/10;
        p1++;
    }
    return ;
}

int main() {
    double niz[] = { 1.23, 3.47, 0, 1.23666 };
    zaokruzi(niz, 4);
    int i;
    for(i = 0; i < 4; i++) {
      printf("%g ", niz[i]);
    }
    return 0;
}
