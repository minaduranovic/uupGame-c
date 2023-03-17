#include <stdio.h>
#include <math.h>
struct Kompleksni {
		int re, im;
	};

struct Kompleksni Stepenuj(struct Kompleksni k, int stepen){
if (stepen == 1) return k;

double  radius= pow(sqrt(k.im*k.im + k.re*k.re), stepen);
double ugao = atan2(k.im, k.re)*stepen;
struct Kompleksni rez;
rez.re= round (radius*cos(ugao));
rez.im= round (radius*sin(ugao));
return rez;
}

int main() {
struct Kompleksni br1 ;
struct Kompleksni br2;
char opr;
int rez1, rez2, n;

printf ("Unesite operator: \n");
scanf("%c", &opr);

if (opr=='+'){
    printf ("Unesite prvi kompleksni broj: ");
    scanf ("\n(%d,%d)",  &br1.re, &br1.im);
    printf ("Unesite drugi kompleksni broj: ");
    scanf ("\n(%d,%d)", &br2.re, &br2.im);
    rez1=br1.re+br2.re;
    rez2=br1.im+br2.im;
    if (rez2==1) printf("Rezultat: %d+i\n", rez1);
   else if (rez2>0)  printf("Rezultat: %d+%di\n", rez1, rez2);
    else {
       rez2=-rez2;
       printf("Rezultat: %d-%di\n", rez1, rez2);
    }
}
else if (opr=='-'){
    printf ("Unesite prvi kompleksni broj: ");
    scanf ("\n(%d,%d)",  &br1.re, &br1.im);
    printf ("Unesite drugi kompleksni broj: ");
    scanf ("\n(%d,%d)", &br2.re, &br2.im);
    rez1=br1.re-br2.re;
    rez2=br1.im-br2.im;
    if (rez2==1) printf("Rezultat: %d+i\n", rez1);
   else if (rez2>0)  printf("Rezultat: %d+%di\n", rez1, rez2);
    else {
       rez2=-rez2;
       printf("Rezultat: %d-%di\n", rez1, rez2);
    }
}
else if (opr=='^'){
    printf ("Unesite kompleksni broj: ");
    scanf ("\n(%d,%d)",  &br1.re, &br1.im);
    printf ("Unesite stepen: ");
    scanf ("\n%d", &n);

    struct Kompleksni rez= Stepenuj(br1, n);
     if (rez.im==1) printf("Rezultat: %d+i\n", rez.re);
   else if (rez.im>1)  printf("Rezultat: %d+%di\n", rez.re, rez.im);
    else {
       rez.im=-rez.im;
       printf("Rezultat: %d-%di\n", rez.re, rez.im);
    }
}
/* Testiranje funkcije za stepenovanje */
// struct Kompleksni k = {3, 2};
// struct Kompleksni k2 = Stepenuj(k, 3);
// printf("%d+%di\n", k2.re, k2.im);
// k.re = 9; k.im = 11;
// k2 = Stepenuj(k, 5);
// printf("%d%di\n", k2.re, k2.im);
// k.re = 7; k.im = -12;
// k2 = Stepenuj(k, 4);
// printf("%d+%di", k2.re, k2.im);

	return 0;
}