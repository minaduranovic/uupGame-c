#include <stdio.h>

int main() {
    int br;
    float niz[500];
    float temp;
    int i, j;
    float m;


    printf("Unesite broj studenata: ");
    scanf("%d", &br);

    printf("Unesite bodove na ispitu: ");

    for (int i=0; i<br; i++){
        scanf("%f", &niz[i]);
        if (niz[i]<0 || niz[i]>20){
            printf("Rezultat ispita nije u trazenom intervalu.")  ;
        }
    }
    for (i = 0; i <br; i++) {
        for (j = i+1; j < br; j++) {
            if(niz[i] > niz[j]) {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }
//for (i = 0 ; i < br ; i++)

    printf("%g ", niz[i]);

    if(br%2==0){
        m=(niz[(br-1)/2] + niz[br/2])/2.0;
    }
    else{
        m=niz[br/2];
    }


    printf("Medijan je: %g", m);
// for (int i=0; i<br; i++){
//     printf("%g ",niz[i]);
// }

    return 0;
}