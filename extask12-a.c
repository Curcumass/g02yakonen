#include <stdlib.h>
#include <stdio.h>
    //ПЕРЕДЕЛАТЬ
int main(){
    int n;
    int m;
    printf("n: ");
    scanf("%d", &n);
    
    printf("m: ");
    scanf("%d", &m);

    int a[n];
    int b[m];
    printf("a[]: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);


    printf("b[]: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int cn = n+m;
    int c[cn];

    //printf("c[]: ");

    for(int i = 0; i < cn; i++){
        c[i] = b[i];
        c[i] = a[i];
    }
    
    printf("cn: %d\n", cn);

    printf("c[]: ");
    for(int i = 0; i < cn; i++){
        printf("%d", c[i]);
        if(i < cn -1) putchar(' ');
    }
    printf("\n")

    return 0;
}