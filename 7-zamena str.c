#include <stdio.h>
#include <string.h>

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

/* Ovdje napisite funkciju zamijeni_slova */

char* zamijeni_slova(char * p1, char *p2){
    int len1= strlen(p1);
    int len2= strlen(p2);

    if (len1==0 || len2==0) return p1;

    for (int i=0; i<len1 ; i++){
        for (int j=0; j<len2/2; j++){
            if (p1[i]==p2[j]){
                p1[i]=p2[len2-j-1];
            }
        }
        
    }
    return p1;
}
int main() {
    char tekst[100], slova[100];
    printf("Unesite neki tekst: ");
    unesi(tekst, 100);
    printf("Unesite string sa slovima za zamjenu: ");
    unesi(slova, 100);
    zamijeni_slova(tekst, slova);
    printf("Nakon transformacije tekst glasi: '%s'\n", tekst);
    return 0;
}
