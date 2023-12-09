#include <stdio.h>



int power(int Number, int puissane){
    int primeNumber = 1;
    for(int i = 0; i < puissane;i++){
        primeNumber = primeNumber * 10; 
    }
    return Number * primeNumber;
}

int main(){
    int a;
    do{
        printf("Enter number: ");
        scanf("%d",&a);
    }while(a < 0);
    int d;
    int puissanc = 0;
    int c,b = 0;
    int pui;
    while (1){
        d = a % 2;
        a = a / 2;
        if(d != 0){
            pui = power(d, puissanc);
            c = d * pui;
            b = b + c;
        }
        puissanc++;
        if(a == 0){
            break;
        }
    }
    printf("%d", b);
}