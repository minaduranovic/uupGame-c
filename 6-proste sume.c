#include <stdio.h>
#include <stdlib.h>

int proste_sume(int niz1[], int n1, int niz2[], int n2) {
  int *pokN1 = niz1 + n1;
  int *pokN2 = niz2 + n2;
  int c, suma = 0;
  int i, prost = 0;
  int tmp=*niz1;
  int *pocetak=niz2;
  

  while (niz1 < pokN1 && niz2<pokN2) {
      prost=0;
      suma=0;
      tmp=*niz1;
    while (tmp!= 0) {
      c = tmp % 10;
      suma += c;
      tmp = tmp / 10;
     
    }
    for (i = 2; i <= suma / 2; i++) {
      if (suma % i == 0) {
        prost = 1;
        break;
      }
    }
     if ((suma==1 || suma==0 || suma==-1)|| (*niz1==1 || *niz1==0 || *niz1==-1)){
          prost=1;
          }
    if (prost != 1) {
        *niz2=*niz1;
        niz2++;
    }
    niz1++;
   
  }
  return niz2-pocetak  ;
}
int main() {

  return 0;
}
