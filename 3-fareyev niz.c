#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int n;

    printf (" Unesite broj n:\n");
    scanf ("%d", &n);

    double x1=0, x2=1, y1=1, y2=n;
    double rez1=x1/y1;
    double rez2=x2/y2;
    double x=0, y=0;
    double niz[100];
    int i=0, j;

    niz[i++]=rez1;
    niz[i++]=rez2;

    while (y!=1 && i<100 && n>1){
        x= floor((y1+n)/y2)* x2-x1;
        y= floor((y1+n)/y2)* y2-y1;
        double rez=x/y;
        niz[i]=rez;
        x1=x2, x2=x, y1=y2, y2=y;
        i++;
    }
    for (j=0; j<i; j++){
        printf("%.3f ", niz[j]);
    }

	return 0;
}