#include <stdio.h>

void udvostruci(int *p, int n){
int *k=p+n;

    while (p<k){
       *p*=2; 
    p++;
    }
    return;
}
int main() {
    int i,niz[3]={1,0,-2};
    udvostruci(niz,3);
    for(i=0;i<3;i++)
        printf("%d ", niz[i]);
	return 0;
}