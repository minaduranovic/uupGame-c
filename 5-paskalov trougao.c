#include <stdio.h>

long fact(int n){
    int i;
    long rez=1;
    for (i=1; i<=n; i++){
        rez=rez*i;
    }
    return rez;
}
int pascal(int x, int y){
    return fact(x-1)/ (fact (y-1)* fact (x-y));
}
int main() {
int i, j;
int n;
printf ("Unesite n: \n");
scanf ("%d", &n);

for (i=0; i<n; i++){
    for (j=0; j<=i; j++){
        printf ("%-5d" ,pascal(i+1,j+1));
    }
    printf("\n");
}


	return 0;
}
