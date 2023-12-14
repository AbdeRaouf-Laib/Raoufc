#include <stdio.h>

int main(){
    int N,L,N1,L1;
    printf("Donner N: ");
    scanf("%d",&N);
    printf("Donner M: ");
    scanf("%d",&L);
    printf("Donner N1: ");
    scanf("%d", &N1);
    printf("Donner M1: ");
    scanf("%d", &L1);
    int M1[N][L];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < L; j++){
            printf("Donner M1[%d][%d]: ",i,j);
            scanf("%d",&M1[i][j]);
        }
    }
    int M2[N1][L1];
    for (int i = 0; i < N1; i++){
        for (int j = 0; j < L1; j++){
            printf("Donner M2[%d][%d]: ",i,j);
            scanf("%d", &M2[i][j]);
        }
    }
    if(L != N1){
        printf("le cas N'est pas defini\n");
        return 0;
    }
    int MR[N][L1];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < L1; j++){
            MR[i][j] =0;
        }
    }
    int e = 0;
    int e1 = 0;
    for(int i = 0; i <N; i++){
        for(int j = 0; j <L1;j++){
            MR[e][e1] = MR[e][e1] + M1[i][j] * M2[j][i];
        }
            e1++;
            if(e1 == L1){
                e1 = 0;
                e++;
            }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < L1; j++){
            printf("%d |",MR[i][j]);
        }
    }
}