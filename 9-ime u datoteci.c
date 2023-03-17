#include <stdio.h>
#include <string.h>

void unesi (char* niz, int vel) {
    int i=0;
    char z=getchar();
    if (z=='\n') {z=getchar();}
    while (z!='\n' && i<vel-1) {
        niz[i]=z;
        i++;
        z=getchar();
    }
    niz[i]='\0';
}

int ime_u_datoteci(const char* datoteka, const char* ime){

    FILE* file = fopen(datoteka, "r");
    if(file==NULL){
        printf("Datoteka ne postoji\n");
        return -1;
    }
    
    char c=' ';
    int br=0;
    while(c!=EOF){
        int i=0;
        while(c==ime[i] && i<strlen(ime)){
            c=fgetc(file);
            i++;
            if(i==strlen(ime)){
                fclose(file);
                return 1;
            }
        }
        fseek(file, br, SEEK_SET);
        br++;
        c=fgetc(file);
    }
    
    fclose(file);
    return 0;
    
}
int main() {
    char datoteka[100], ime[100];
    printf("Unesite naziv datoteke: ");
    unesi(datoteka, 100);
    printf("Unesite trazeno ime: ");
    unesi(ime, 100);
    if (ime_u_datoteci(datoteka, ime))
    	printf("Ime se nalazi u datoteci.\n");
    else
    	printf("Ime se NE nalazi u datoteci.\n");
    return 0;
}