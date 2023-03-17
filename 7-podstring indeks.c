#include <stdio.h>

int duzina (const char*str){
    int duz=0;
    while (*str++) duz++;
    return duz;
}
int uporedi(const char *str1, const char*str2, int duz){

    for (int i=0; i<duz; i++ ){
        if (str1[i]!=str2[i]) return 1;
    }
    return 0;
}
int pronadji_posljednji(const char *str, const char *trazi) {
int duz1=duzina(str);
int duz2=duzina(trazi);

const char *p=str+duz1-1;

while (p>=str){
    if (uporedi(p, trazi,duz2)==0){
        return p-str;
    }
    p--;
}
return -1;
}
int main() {
  const char *n = "Danas je divan dan!";
  printf("%d", pronadji_posljednji(n, "an"));
  return 0;
}
