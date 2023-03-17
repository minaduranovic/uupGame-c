#include <math.h>
#include <stdio.h>
#include <stdlib.h>
struct Tacka {
  int x, y;
};
struct Trougao {
  struct Tacka A, B, C;
};

int izbaci_pravougle(struct Trougao *trouglovi, int br) {
  int i;
  for (i = 0; i < br; i++) {
    double a = (sqrt((trouglovi[i].B.x - trouglovi[i].A.x) *
                         (trouglovi[i].B.x - trouglovi[i].A.x) +
                     (trouglovi[i].B.y - trouglovi[i].A.y) *
                         (trouglovi[i].B.y - trouglovi[i].A.y)));
    double b = (sqrt((trouglovi[i].A.x - trouglovi[i].C.x) *
                         (trouglovi[i].A.x - trouglovi[i].C.x) +
                     (trouglovi[i].A.y - trouglovi[i].C.y) *
                         (trouglovi[i].A.y - trouglovi[i].C.y)));
    double c = (sqrt((trouglovi[i].B.x - trouglovi[i].C.x) *
                         (trouglovi[i].B.x - trouglovi[i].C.x) +
                     (trouglovi[i].B.y - trouglovi[i].C.y) *
                         (trouglovi[i].B.y - trouglovi[i].C.y)));
    // printf ("\n%lf %lf %lf", a, b, c);
    // double rez1=round(c*c);
    // printf ("\n%f   ", rez1);
    // double rez2=round(a*a);
    // double rez3=round(b*b);
    // printf ("%f  %f ", rez2, rez3);
    if (round(a * a + b * b) == round(c * c) ||
        round(a * a + c * c) == round(b * b) ||
        round(b * b + c * c) == round(a * a)) {
      // printf ("mina");
      for (int j = i + 1; j < br; j++) {
        trouglovi[j - 1] = trouglovi[j];
      }
      i--;
      br--;
        }
    // } else {
    //   i++;
    // }
  }
  return br;
}

int main() {
  /* AT1: Osnovni test */
  struct Trougao trouglovi[3];
  int i, vel;

  /* Jeste pravougli */
  trouglovi[2].A.x = 0;
  trouglovi[2].A.y = 0;
  trouglovi[2].B.x = 1;
  trouglovi[2].B.y = 1;
  trouglovi[2].C.x = 0;
  trouglovi[2].C.y = 1;

  izbaci_pravougle(trouglovi, 1);
  return 0;
}