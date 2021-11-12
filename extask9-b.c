#include <stdio.h>

int main(){
    #define n 5
    int a[n];

    int m;
    printf("num: ");
    scanf("%d", &m);
    if(m < 1 || m > 5){
        printf("error\n");
        return 0;
    }

    for(int i = 0; i < m; i++){
        printf("a%d: ", i);
        scanf("%d", &a[i]);
        if(a[i] < -10 || a[i] > 10){
            printf("error\n");
            return 0;
        }
    }

    printf("a[] = ");
    for(int i = 0; i < m; i++){
        printf("%d", a[i]);
        if(i <m - 1) putchar(' ');        
    }
    putchar('\n');
    int s = 0;
    int p = 1;
    for(int i = 0; i < m; i++){
        s += a[i];
        p *= a[i];
    }

    printf("sum: %d\nprod: %d\n ", s, p);

    return 0;
}