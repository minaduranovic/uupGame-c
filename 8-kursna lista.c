#include <stdio.h>
#include<string.h>
struct Kurs {
    char valuta[5];
    float vrijednost;
};
float razmjena(struct Kurs *lista, int n, char *valuta, float iznos){
    int i;
    float rez=0;
    for (i=0; i<n; i++){
       if (strcmp(lista[i].valuta, valuta)==0){
           rez= iznos* lista[i].vrijednost;
       }
    }
    return rez;
}
int main() {
int n, i;
struct Kurs lista[100];

printf ("Unesite broj valuta: ");
scanf ("%d", &n);

for (i=0; i<n; i++){
    printf ("Unesite valutu i iznos u KM: ");
    scanf ("%s %f", lista[i].valuta, &lista[i].vrijednost );
}
char valuta[10];
float iznos;

printf ("Unesite valutu i iznos");
scanf ("%s %f", valuta, &iznos);

float km= razmjena(lista, n,valuta, iznos);
printf ("Iznos u KM je: %g", km);

	return 0;
}
