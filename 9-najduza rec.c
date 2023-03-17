#include <stdio.h>

int main()
{
char ime[256]="";
char c;
int i=0;
int maxLen=0;
int maxP=0, p=0;
int flag=0;

printf ("Unesite naziv datoteke: ");
scanf("%s", ime);

FILE* file= fopen(ime,"r");

if (file==NULL){
    printf("Datoteka %s ne postoji", ime);
    return 0;
}
c=fgetc(file);
p++;

while (c!=EOF){
    flag=0;
    for (i=0; c!=' ' && c!=EOF; i++){
        if (c<'A'|| (c>'Z' && c<'a')|| c>'z'){
            flag=1;
        }
        p++;
        c=fgetc(file);
    }
    if (i>maxLen && flag==0){
        maxLen=i;
        maxP=p-i-1;
    }
    c=fgetc(file);
    p++;
}
fseek(file, maxP, SEEK_SET);

for (i=0; i<maxLen; i++){
     printf("%c", fgetc(file));
}
fclose(file);
  return 0;
}
