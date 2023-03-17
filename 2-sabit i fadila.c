#include <stdio.h>

int main() {
  int i = 0;
  char polje1;
  char polje2;
  int poen1, poen2;
  int strelica1;
  int strelica2;
  int SumaF = 0;
  int SumaS = 0;

  

  do {
      if(i==0){
          printf("Unesite pogotke za Sabita: ");
      }
    scanf("%c", &polje1);
    if (polje1 == 'S') {
      scanf("%d", &poen1);
      strelica1 = poen1;

    } else if (polje1 == 'D') {
      scanf("%d", &poen1);

      strelica1 = 2 * poen1;
    } else if (polje1 == 'T') {
      scanf("%d", &poen1);

      strelica1 = 3 * poen1;
    } else if (polje1 == 'X') {
      strelica1 = 0;
    } else if (polje1 == 'O') {
      strelica1 = 25;
    } else if (polje1 == 'I') {
      strelica1 = 50;
    } else {
      printf("Neispravni ulazni podaci.\n");
      SumaS = 0;
      i = 0;
      do{
        scanf("%c", &polje1);
      }while(polje1!='.');
      scanf("%c", &polje1);
      continue;
      
    }
    SumaS += strelica1;
    i++;

  } while (i < 9);

  scanf("%c", &polje1);
 scanf("%c", &polje1);
  int j = 0;

  
  do {
      if(j==0){
          printf("Unesite pogotke za Fadilu: ");
      }
    scanf("%c", &polje2);
    //printf("\n%c\n", polje2);
    if (polje2 == 'S') {
      scanf("%d", &poen2);

      strelica2 = poen2;
    } else if (polje2 == 'D') {
      scanf("%d", &poen2);

      strelica2 = 2 * poen2;
    } else if (polje2 == 'T') {
      scanf("%d", &poen2);

      strelica2 = 3 * poen2;
    } else if (polje2 == 'X') {
      strelica2 = 0;
    } else if (polje2 == 'O') {
      strelica2 = 25;
    } else if (polje2 == 'I') {
      strelica2 = 50;
    } else {
      printf("Neispravni ulazni podaci.\n");
      do{
        scanf("%c", &polje2);
      }while(polje2!='.');
      scanf("%c", &polje2);
      SumaF = 0;
      j = 0;
      continue;
    }
    SumaF += strelica2;
    j++;

  } while (j < 9);

  int ukupn0 = 301;

  if (SumaS >= 301 && SumaF >= 301) {
    printf(
        "Oba igraca su premasila potrebni broj poena, rezultat je nerijesen.");
    return 0;
  }
  else if (SumaF >= 301) {
    printf("Sabit je ostvario %d poena, Fadila je premasila potrebni broj poena, "
            "Pobjednik je Sabit, kojem je ostalo jos %d poena do pobjede.",
           SumaS, 301 - SumaS);
  } else if (SumaS >= 301) {
    printf("Sabit je premasio potrebni broj poena, Fadila je ostvarila %d poena. "
           "Pobjednik je Fadila, kojoj je ostalo jos %d poena do pobjede.",

           SumaF, 301 - SumaF);

  }
  else if (SumaF > SumaS) {
    printf("Sabit je ostvario %d poena, Fadila je ostvarila %d poena. "
           "Pobjednik je Fadila, kojoj je ostalo jos %d poena do pobjede.",
           SumaS, SumaF, 301 - SumaF);
  } else if (SumaS > SumaF) {
    printf("Sabit je ostvario %d poena, Fadila je ostvarila %d poena. "
           "Pobjednik je Sabit, kojem je ostalo jos %d poena do pobjede.",
           SumaS, SumaF, 301 - SumaS);
  }else if(SumaS == SumaF){
      printf("Sabit je ostvario %d poena, Fadila je ostvarila %d poena. Rezultat je nerijesen.", SumaS, SumaF);
  }

  return 0;
}