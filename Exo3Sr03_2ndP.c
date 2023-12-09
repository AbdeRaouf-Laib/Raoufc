#include <stdio.h>

int main()
{
    int N, M;
    printf("Donner N: ");
    scanf("%d", &N);
    printf("Donner M: ");
    scanf("%d", &M);
    int m[N][M];
    int max;
    max = m[N][M];
    int indexI, indexJ;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("Donner m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    int val;
    printf("Donner la valeur: ");
    scanf("%d", &val);
    int count = 0;
    int T[N];
    for (int i = 0; i < N; i++)
    {
        count = 0;
        for (int j = 0; j < M; j++)
        {
            if (val == m[i][j])
            {
                count++;
            }
        }
        T[i] = count;
    }
    for(int i = 0; i < N;i++){
        printf("T[%d] = %d\n",i,T[i]);
    }
}