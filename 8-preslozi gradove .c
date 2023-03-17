
#include <stdio.h>

struct Grad {
    char naziv[20];
    int pozivni_broj;
};

void preslozi_pozivni(struct Grad *gradovi, int vel, int br){
    int i, j, pocetak=0;
    struct Grad temp;
    for (i=0; i<vel; i++){
       if (gradovi[i].pozivni_broj==br){
           temp=gradovi[i];
        for (j=i; j>pocetak; j--){
           gradovi[j]=gradovi[j-1];
        }
      gradovi[pocetak]=temp;
      pocetak++;
    }
}
}

int main() {
  
/* AT1: Primjer iz zadatka, Sarajevo, Vogosca i Ilidza idu naprijed */
struct Grad niz[6] = { { "Sarajevo", 033}, {"Tuzla", 032}, {"Mostar", 031}, {"Vogosca", 033}, {"Zenica", 034}, {"Ilidza", 033}};
preslozi_pozivni(niz, 6, 033);
int i;
for (i=0; i<6; i++)
   printf("%s ", niz[i].naziv);

	return 0;
}