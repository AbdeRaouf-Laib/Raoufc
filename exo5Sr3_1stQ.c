#include <stdio.h>

int main()
{
    int N, M;
    printf("Donner N: ");
    scanf("%d", &N);
    int m[N][N];
    int max;
    max = m[N][N];
    int indexI, indexJ;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("Donner m[%d][%d]: ", j, i);
            scanf("%d", &m[j][i]);
        }
    }
    for(int i = 0; i < N;i++){
        i++;
        for(int j = 0;j < N;j++){
            m[i][j] = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("| %d |",m[i][j]);
        }
        printf("\n");
    }
}