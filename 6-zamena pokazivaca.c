#include <stdio.h>

void zamijeni_pokazivace(int **p1, int**p2){
    int *temp;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

return;
}
int main() {
	
	return 0;
}
