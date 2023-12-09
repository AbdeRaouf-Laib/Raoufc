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
    int indexI,indexJ;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("Donner m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            if(max < m[i][j]){
                max = m[i][j];
                indexI = i;
                indexJ = j;
            }
        }
    }
    printf("le max est: %d dons indice i est: %d et j est: %d",max,indexI,indexJ);
}