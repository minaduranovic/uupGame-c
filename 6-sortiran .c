#include <stdio.h>

void sortiraj(double niz[], int n) {

  double *min;
  double *pokNiz = &niz[0];
  double *pokKraj = pokNiz + n;
  double *pokJ;
  double temp;
  while (pokNiz < pokKraj) {
    min = pokNiz;
    pokJ = pokNiz + 1;
    while (pokJ < pokKraj) {
      if (*pokJ > *min) {
        min = pokJ;
      }
      pokJ++;
    }
    temp = *pokNiz;
    *pokNiz = *min;
    *min = temp;
    pokNiz++;
  }
}
int main() {
  printf("Lekcija 6: Sortiraj");
  return 0;
}
