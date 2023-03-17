#include <stdio.h>

void ispisi_unazad (const char *str) {
    if (*str== '\0') return;
    ispisi_unazad(str+1);
    putchar(*str);
}

int main() {
	char str[]= "Lekcija 7: Stringovi, Ispiši unazad";
    ispisi_unazad(str);
	return 0;
}