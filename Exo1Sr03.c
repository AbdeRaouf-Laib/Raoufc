#include <stdio.h>

int main(){
    int N,M;
    printf("Donner N: ");
    scanf("%d",&N);
    printf("Donner M: ");
    scanf("%d",&M);
    int m[N][M];
    for(int i = 0; i < N;i++){
        for(int j= 0; j < M; j++){
            printf("Donner m[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    int somme = 0;
    int produit = 1;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            somme = somme + m[i][j];
            produit = produit * m[i][j];
        }
    }
    printf("la somme est: %d\n",somme);
    printf("le produit est: %d\n",produit);
}
