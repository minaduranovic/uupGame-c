#include <math.h>
#include <stdio.h>
#define epsilon 0.00001

struct Tacka {
  double x, y;
};

struct Kruznica {
  struct Tacka centar;
  double poluprecnik;
};

double rast(struct Tacka *t1, struct Tacka *t2) {
  double d1 = t1->x - t2->x;
  double d2 = t1->y - t2->y;
  return sqrt(d1 * d1 + d2 * d2);
}

struct Kruznica obuhvat(struct Tacka *niz, int vel) {
  struct Tacka centar = niz[0];
  int i, j,t;
  double R = 0;
  double r;

  for (i = 0; i < vel; i++) {
    for (j = i; j < vel; j++) {

      r = rast(&niz[j], &niz[i]);
      if ((r - R) > epsilon) {
        R = r;
        centar.x = (niz[j].x + niz[i].x) / 2;
        centar.y = (niz[j].y + niz[i].y) / 2;
      }
    }
  }
  R/=2;
  t=1;
  for(i=0;i<vel;i++){
      r = rast(&centar, &niz[i]);
      if ((r - R) > epsilon) {
        t=0;
      }
  }
  if(!t) R*=2;
  struct Kruznica k = {centar, R};
  return k;
}
void ispis_kruznice(struct Kruznica k) {
  printf("(%.2lf,%.2lf)", k.centar.x, k.centar.y);
  printf(" %.2lf", k.poluprecnik);
}
int main() {
  /* AT1: Jednostavan primjer sa dvije tacke*/
  struct Tacka niz[] = {{0, 0}, {0, 2}};
  struct Kruznica test = obuhvat(niz, 2);
  ispis_kruznice(test);

  return 0;
}
