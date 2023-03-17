#include <stdio.h>

int duzina(char *str) {
  int duz = 0;
  char*p=str;
  while (*p != '\0') {
    duz++;
    p++;
  }
  return duz;
}

char *okreni(char *str) {

  char *p1 = str;
  char *p2 = str + duzina(str) / 2-1;
//   printf("%c", *str);
// printf("\n%c %c", *p1, *p2);

  while (p1 < p2) {
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p1++;
    p2--;
  }
  p1 =(duzina(str)%2==0)? str +duzina(str)/2 : str+duzina(str)/2+1 ;
  p2 = str + duzina(str)-1 ;
//    printf("%c", *str);
// printf("\n%c %c", *p1, *p2);

  while (p1 < p2) {
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p1++;
    p2--;
  }
  return str;
}

int main() {
  char str[5] = "ABCD";
//   int duzin = duzina(str);
//   printf("%d", duzin);
  printf("\n%s", okreni(str));
  return 0;
}
