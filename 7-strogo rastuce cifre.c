#include <stdio.h>

int cifre(const char *c) {
  const char *p1 = c;
  while (*p1 != '\0') {
    if (*p1 > 47 & *p1 < 58) {
      return 1;
    }
    p1++;
  }
  return 0;
}
int srce(const char *s) {
  int i = 0;
  int niz[100];
  int  broj=0;
  if (cifre(s) != 1)
    return -1;
  while (*s != '\0') {
    if (*s >= '0' && *s <= '9') {
      if(*s>broj){
          broj=*s;;
      } else {
          return 0;
      }
    }
    s++;
  }
  // for(int j=0;j<i;j++) printf("%d ",niz[j]);
  // printf("\n");
//   for (int j = 0; j < i - 1; j++) {
//     if (niz[j] >= niz[j + 1])
//       return 0;
//   }
  return 1;
}
int main() {
  printf("Lekcija 7: Stringovi, Strogo rastuće cifre");
  printf("%d %d\n", srce("a1b2c3d"), srce("a1b3c3d"));
  return 0;
}