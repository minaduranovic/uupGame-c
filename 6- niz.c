#include <stdio.h>

void ispisi(int *p, int n) {
int *k=p+n;
    printf("{");
    while (p< k){
        printf("%d", *p);
        if (p<k-1){
            printf(", ");
        }
        p++;
    }
    printf("}");
    return;
}

int main() {
    int niz1[] = {1, 3, 2};
    int niz2[10] = {0, 3, 2, 2, 2, 4, 6, 1, 9, 10};
    ispisi(niz1, 3);
    printf("\n");
    ispisi(niz2, 10);
	return 0;
}
