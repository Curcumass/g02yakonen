#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    int N;
    int sum;
    int *m;
    
    printf("Введите колличество оценок вашего аттеста: ");
    scanf("%d", &N);

    m = (int*) malloc(N * sizeof(int));

    for(int i = 0; i < N; i++){
        m[i] = rand() % 5 + 2;
        sum += m[i];
    }
    float avg = (float)sum / (float)N;
    printf("avg = %1.2f\n", avg);

    if (avg < 4.6)
        printf("Твой средний былл ниже 4.6\n");
    else
        printf("Твой средний былл подходит для поступления\n");

    free(m);
    return 0;

}