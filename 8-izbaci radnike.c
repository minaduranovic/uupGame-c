#include <stdio.h>
#include <string.h>
struct Datum {
  int dan, mjesec, godina;
};
struct Radnik {
  char ime_prezime[30];
  struct Datum datum_rodjenja;
  int plata[12];
};
int izdvoji_radnike(struct Radnik *niz, int br) {
  int i, j, rez = 0;
  char *prez;
  int god;
  int suma = 0;
  double prosjecna;
  int count = 0;
  for (i = 0; i < br; i++) {
    god = 2022 - niz[i].datum_rodjenja.godina;
    if ((niz[i].datum_rodjenja.mjesec == 2 && niz[i].datum_rodjenja.dan > 16) ||
        niz[i].datum_rodjenja.mjesec > 2) {
      god--;
    }
    if (god >= 30 && god <= 40) {
      prez = strchr(niz[i].ime_prezime, ' ');
      if(prez==NULL)continue;
      prez++;
      if (*prez == 'R') {
        suma=0;
        for (j = 0; j < 12; j++) {
          suma += niz[i].plata[j];
        }
        prosjecna = (double)suma / 12;
        if (prosjecna >=1000 && prosjecna <= 2000) {
          count++;
         //printf("%s", niz[i].ime_prezime);
        }
      }
    }
  }
  return count;
}
int main() {
 
  return 0;
}