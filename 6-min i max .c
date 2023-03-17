#include <stdio.h>

int *max_el(int *p1, int *p2){
    
    int maxEl;
    int *maxP;
    maxP=p1;
    maxEl=*p1;
        while (p1<p2){
          if (*p1>maxEl){
              maxEl=*p1;
              maxP=p1;
           }
         p1++;
        }
    return maxP;
}
int *min_el(int *p1, int *p2){

    int minEl=*p1;
    int *minP=p1;

        while (p1<p2){
            if (*p1<minEl){
                minEl=*p1;
                minP=p1;
            }
            p1++;
        }
        return minP;
}
int main() {

	return 0;
}
