#include <stdio.h>

struct Tacka {
    double x,y;
};
struct Pravougaonik {
    struct Tacka dolje_lijevo;
    struct Tacka gore_desno;
};

struct Pravougaonik min_pravougaonik(struct Tacka *niz, int n){
    struct Pravougaonik pr;
    int i;

    pr.dolje_lijevo=niz[0];
    pr.gore_desno=niz[0];

    for (i=0; i<n; i++){
        if (niz[i].x<pr.dolje_lijevo.x){
            pr.dolje_lijevo.x=niz[i].x;
        }
        if (niz[i].x>pr.gore_desno.x){
            pr.gore_desno.x=niz[i].x;
        }
         if (niz[i].y<pr.dolje_lijevo.y){
            pr.dolje_lijevo.y=niz[i].y;
        }
        if (niz[i].y>pr.gore_desno.y){
            pr.gore_desno.y=niz[i].y;
        }
    }
    return pr;
}

int main() {
int i, n;

struct Tacka niz[100];

printf ("Unesite broj tacaka: \n");
scanf ("%d", &n);

for (i=0; i<n; i++){
    printf("Unesite koordinate x i y tacke %d: ", i+1);
    scanf("%lf %lf", &niz[i].x, &niz[i].y);
}
struct Pravougaonik pr=min_pravougaonik(niz, n);
printf ("Minimalni pravougaonik za ove tacke ima uglove: (%g,%g) - (%g,%g)", pr.dolje_lijevo.x, pr.dolje_lijevo.y, pr.gore_desno.x, pr.gore_desno.y );
	return 0;
}