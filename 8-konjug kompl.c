#include <stdio.h>

typedef struct {
	int im, re;
} Kompleksni;
int nemaDuplikat(Kompleksni c, Kompleksni* rez, int duz){
     for(int i=0; i< duz; i++){
          if(rez->im==c.im && rez->re==c.re){
            return 0;
           }
           rez++;
        }
      return 1;
}
int konjugovano_kompleksni (Kompleksni *p1, Kompleksni *p2, Kompleksni *rez){
    Kompleksni *p=p1;
    Kompleksni *prez=rez;
    int count=0;
    Kompleksni c;
while (p<p2){
    c.im=-p->im;
    c.re=p->re;
    if (nemaDuplikat(c, prez, count)){
        *rez=c;
        rez++;
        count ++;
    }
  p++;
}
return count;
}
int main() {
	printf("Lekcija 8: Strukture, Konjugovano kompleksni");
	return 0;
}
