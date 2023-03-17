#include <stdio.h>
// Potrebno je napisati C program koji sadrži sljedeće funkcije:

// Funkcija ubaci prima niz cijelih brojeva te nakon svakog člana niza ubacuje u niz pozitivan broj koji predstavlja sumu cifara prethodnog člana. Npr. ako je niz glasio:
// 123, 456, 789
// nakon poziva funkcije niz treba glasiti:
// 123, 6, 456, 15, 789, 24
// Funkcija ne treba vraćati ništa jer je broj članova nakon poziva funkcije poznat (iznosi tačno dvostruku vrijednost primljenog broja članova). U funkciji pretpostavite da je niz deklarisan tako da je dovoljno velik da primi sve dodatne članove.

// Funkcija izbaci prima niz cijelih brojeva i iz njega izbacuje sve članove niza koji su Fibonaccijevi brojevi. Fibonaccijev (Fibonaći) niz je dobro poznati niz prirodnih brojeva čiji je svaki član jednak sumi prethodna dva, a prva dva člana niza su po definiciji jedinice, dakle taj niz glasi:
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55…

// Dakle, iz primljenog niza treba izbaciti sve brojeve koji se pojavljuju u Fibonaccijevom nizu, pa npr. ako je funkciji proslijeđen niz:
// 1, 2, 3, 4, 5, 6, 7, 8, 9
// nakon poziva funkcije niz treba glasiti:
// 4, 6, 7, 9
// Funkcija treba vratiti broj članova niza nakon izbacivanja.

// U funkciji main treba iskoristiti dvije prethodno napravljene funkcije na sljedeći način: korisnik najprije unosi niz od fiksno 10 cijelih brojeva, zatim se poziva funkcija ubaci, pa funkcija izbaci, te se na kraju ispisuje tako modificiran niz.

// Primjer ulaza i izlaza:

// Unesite niz od 10 brojeva: 1 2 3 4 5 6 7 8 9 10
// Modificirani niz glasi: 4, 4, 6, 6, 7, 7, 9, 9, 10.
// U programu se smiju nalaziti i druge funkcije osim navedenih - po želji.

// Napomena: U zadatku je strogo zabranjeno koristiti pomoćne nizove tj. deklarisati bilo kakav niz osim niza deklarisanog u main funkciji! Rješenje u kojem budu korišteni pomoćni nizovi će biti bodovano sa 0 bodova!
void ubaci(int *niz, int n){
    int i,j, suma=0;
    int br;
    for (i=n-1; i>=0; i--){
        suma=0;
        br=niz[i];
        if (br<0) br=-br;
        while (br>0){
            suma+=br%10;
            br=br/10;
        }
        for (j=n; j>i; j--){
            niz[j]=niz[j-1];
        }
        niz[i+1]=suma;
        n++;
    }
}
int izbaci(int *niz, int n){
int i,j;

for (i=0; i<n; i++){
    int f1=1, f2=1;
    while (f2<niz[i]){
        int temp=f2;
        f2+=f1;
        f1=temp;
    }
    if (f2==niz[i]){
        for (j=i; j<n-1; j++){
            niz[j]=niz[j+1];
        }
        i--;
        n--;
    }
}
return n;
}
int main() {
    int niz[20];
    int i;
	printf("Unesite niz od 10 brojeva: \n");
    for (i=0; i<10; i++){
        scanf("%d", &niz[i]);
    }
    ubaci(niz, 10);
    int new=izbaci(niz, 20);

    printf("Modificirani niz glasi: ");
    for (i=0; i<new; i++){
        printf ("%d", niz[i]);
        if (i<new-1) printf(", ");
        if (i==new-1) printf (".");
    }
	return 0;
}
