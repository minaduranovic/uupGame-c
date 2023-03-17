#include <stdio.h>

void prekopiraj (const int *izvor, int *odrediste, int n){
const int *broj =izvor +n;
    while (izvor<broj){
        *odrediste=*izvor ;
        izvor++;
        odrediste++;
    }
    return;
}
int main() {
    int niz1 [10] = {1,2,3,4,5,6,7,8,9,10};
    int niz2 [10];
    prekopiraj(niz1, niz2, 10);
    int i;
    for(i=0; i<10; i++) printf("%d ",niz2[i]);
    return 0;
}