#include <stdio.h>

int indexMaxCount (int* niz, int vel){
    int max=0;
    int indexMax=0;
    for (int i=0; i<vel; i++){
        if (niz[i]>=max){
            max=niz[i];
            indexMax=i;
        }
    }
    if (max==0) indexMax=-1;
    return indexMax;
}
int indexMinCount (int* niz, int vel){
    int min =100;
    int indexMin=0;
    for (int i=0; i<vel; i++){
        if (niz[i]<min && niz[i]!=0){
            min=niz[i];
            indexMin=i;
        }
    }
    if (min==100) indexMin=-1;
    return indexMin;
}

double aritmeticka(int *niz, int vel, int *max_cifra, int *min_cifra) {

  double suma = 0;
  int i = 0, j = 0, k = 0;
  double arit;
  int cifre[10]={0,0,0,0,0,0,0,0,0,0,};
  int n = 0;
  int br, cif, maxcount = -1, mincount = -1;

  for (i = 0; i < vel; i++) {
    suma += niz[i];
  }
  arit = suma / vel;

  for (i = 0; i < vel; i++) {
    if (niz[i] > arit) {
      br = niz[i];

      do{
        if (br<0) br=-br;
        int ind = br % 10;
        cifre[ind]++;
        br = br / 10;
      } while (br!=0);

      }
    }
  
 maxcount=indexMaxCount(cifre, 10);
 *max_cifra=maxcount;
 mincount=indexMinCount(cifre, 10);
 *min_cifra=mincount;

  return arit;
}

int main() {
    int niz[100];
    int i=0;
  printf("Unesite clanove niza (0 za kraj): ");

while (1){
    scanf("%d", &niz[i]);
    if (niz[i]==0) break;
    i++;
}
int maxc, minc;
double rez= aritmeticka(niz, i, &maxc, &minc);
printf("Najvise puta se ponavlja cifra %d a najmanje cifra %d.", maxc, minc);

  return 0;
}