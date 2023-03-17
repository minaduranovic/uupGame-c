
#include <stdio.h>

double stepen(double x) {
  static double trenutni = 1;
  static double prethodni = 0;

  if (x != prethodni) {
    trenutni = 1;
  }
  trenutni *= x;
  prethodni = x;
  return trenutni;
}
void stepenuj_niz(double A[], int s[], int duzina) {
    double temp;
  for (int i = 0; i < duzina; i++) {
    stepen(-1);
    for (int j = 0; j < s[i]; j++) {
      temp = stepen(A[i]);
    }
    A[i]=temp;
  }
}

int main() {
  int n, i, niz2[10000];
  double niz[10000];
  printf("Unesite velicinu za oba niza: ");
  scanf("%d", &n);
  printf("Unesite niz realnih brojeva: ");
  for(i=0; i<n; i++) {
      scanf("%lf", &niz[i]);
  }
  printf("Unesite niz cijelih brojeva: ");
  for(i=0; i<n; i++) {
      scanf("%d", &niz2[i]);
  }
  stepenuj_niz(niz,niz2,n);
  printf("Nakon stepenovanja niz je: \n");
  for(i=0; i<n; i++) {
      printf("%g ", niz[i]);
  }


  return 0;
}