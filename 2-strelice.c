#include <stdio.h>


int main() {
    int i, j;
    int n=5;
   

    for (i=1; i<=n-1; i++){
        for( j=0; j<i; j++){
            printf("* ");
        } for (j=i; j<2*n-1-i; j++) {
            printf("  ");
        } for (j=0; j<i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i=0; i<2*n-1; i++){
        printf("* ");

    }
printf("\n");
    for (i=1; i<=n-1; i++){
        for (j=0; j<n-i; j++) {
            printf("* ");
        } for(j=0; j<2*i-1; j++){
            printf("  ");
        } for(j=0; j<n-i; j++){
            printf("* ");
        }


        printf("\n");
    }




    return 0;
}
