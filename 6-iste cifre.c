#include <stdio.h>

int nizCifara(int broj, int* niz) {
  
  int brojCif = 0;
  int i, j;
  int temp;
  for (i = 0; broj != 0; i++) {
    niz[i] = broj % 10;
    broj = broj / 10;
    brojCif++;
  }
  for (i = 0; i < brojCif; i++) {
    for (j = i + 1; j < brojCif; j++) {
      if (niz[i] > niz[j]) {
        temp = niz[i];
        niz[i] = niz[j];
        niz[j] = temp;
      }
    }
  }
  return brojCif;
}
int isti(int *niz1, int *niz2, int vel1, int vel2){
if (vel1!=vel2){
    return 0;
}
for (int i=0; i<vel1; i++){
    if (niz1[i]!=niz2[i]){
        return 0;
    }
}
return 1;
}
int *istecifre(int *niz, int vel, int *p) {
  int *kraj = niz + vel;
  int nizP[100];
  int brojCifP=nizCifara(*p, nizP);
  int *q=p+1;
 
  while ( q< kraj) {
      int nizEl[100];
      int brojCifEl=nizCifara(*q, nizEl);    
      if (isti(nizP, nizEl, brojCifP, brojCifEl)==1){
          return q;
      }
      q++;
  }
  int *x=p;
  while (niz<p){
      int nizEl[100];
      int brojCifEl=nizCifara(*niz, nizEl);
      if (isti( nizEl,nizP, brojCifEl, brojCifP)==1){
          return niz;
      }
     niz++;
  }
  return x ;
}
int main() { return 0; }
