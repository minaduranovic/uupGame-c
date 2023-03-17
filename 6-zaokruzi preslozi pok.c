#include <stdio.h>
#include<math.h>
#include <stdlib.h>
void zaokruzi1(double *niz, int vel ){
int i; 
for (i=0;i<vel; i++){
    niz[i]=round(niz[i]*10)/10;
}
}
double suma(double a){
    int b=a*10;
    double sum=0;
    while (b!=0){
        int c=b%10;
        sum+=c;
        b=b/10;
    }
    return sum;
}
    
void preslozi(double *niz, int vel,int k ){
   int i, j;
   int p=0;
   zaokruzi1(niz,vel);
   for (i=0; i<vel; i++){
           if (fabs(suma(niz[i]))>=k){
               double temp=niz[i];
               for (j=i; j>p; j--){
                   niz[j]=niz[j-1];
               }
            niz[p]=temp;
            p++;
           }
       
   }
}

int main() {
    int i, vel, k;
    double niz[100];
    
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &vel);
    printf("Unesite clanove niza: ");
    for (i=0; i<vel; i++)
        scanf("%lf", &niz[i]);
    printf("Unesite broj k: ");
    scanf("%d", &k);
  
    preslozi(niz, vel, k);
  
    printf("Nakon poziva funkcije preslozi niz glasi:\n");
    for (i=0; i<vel; i++)
        printf("%g ", niz[i]);
	return 0;
}
