#include <stdio.h>
#include <stdlib.h>

#define lim 15

int n = 0;
int a[lim];

int main(){
    printf("a[]: ");

    int i = 0;
    while(1){
        int v;
        if(scanf("%d", &v) != 1) break;
        if(i == lim){
            puts("overflow");
            exit(EXIT_SUCCESS);
        }
        a[i] = v;
        i++;
    }

    n = i;
    printf("num:\t%d\n", n);

    int s = 0;
    for(int i = 0; i < n; i++)
        s+=a[i];

    float avg = s / (float) n;
    printf("mean:\t%.2f\n", avg);

    return EXIT_SUCCESS;
}