#include <stdio.h>

void unesi (char* niz, int vel) {
    int i=0;
    char z=getchar();
    if (z=='\n') {z=getchar();}
    while (z!='\n' && i<vel-1) {
        niz[i]=z;
        i++;
        z=getchar();
    }
    niz[i]='\0';
}
int duzina (const char *str){
    int duz=0;
    while (*str++) duz++;
    return duz;
}
int periodican(const char *string){

int n=duzina(string);
int i, j;
for (i=1; i< n; i++){
    for (j=i; j<n; j++){
        if( string[j]!=string[j-i]) break;
    }
    if (j==n) return i;
}
return 0;

}

int main() {
    char tekst[100];
    printf("Unesite neki tekst: ");
    unesi(tekst, 100);
    int period = periodican(tekst);
    if (period > 0) {
        printf ("Tekst je periodican sa periodom %d.\n", period);
    } else {
        printf ("Tekst nije periodican.\n");
    }
    return 0;
}
