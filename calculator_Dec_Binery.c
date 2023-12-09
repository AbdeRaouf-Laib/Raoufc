#include <stdio.h>

int power(int Number, int puissane,int multi)
{
    int primeNumber = 1;
    for (int i = 0; i < puissane; i++)
    {
        primeNumber = primeNumber * multi;
    }
    return Number * primeNumber;
}

void F__Dec_to_Binery();
void F__Binery_to_Dec();

int main(){
    char yORn;
    do{
        printf("Welcome!!! are you ready!?\n");
        printf("Choose from the following menu: \n");
        printf("\
            \t-1) convert Dec to Binery: \n\
            \t-2) convert Binery to Dec: \n\
            \t-3) convert float Number to Binery:\n\
            \t-4) convert Binery to float Number:\n\
    \v");
        int userChoise;
        do
        {
            printf("Enter you choice(Number 1-4)");
            scanf("%d", &userChoise);
        } while (userChoise < 1 || userChoise > 4);
        if (userChoise == 1)
        {
            F__Dec_to_Binery();
        }
        else if(userChoise == 2){
            F__Binery_to_Dec();
        }
        printf("Do you want to exit the application?: (y Or n)");
        scanf("%c",&yORn);
    }while(yORn == 'n');
}

void F__Dec_to_Binery(){
    int userNumber;
    do
    {
        printf("Enter number: ");
        scanf("%d", &userNumber);
    } while (userNumber < 0);
    int d;
    int puissanc = 0;
    int c, b = 0;
    int pui;
    while (1)
    {
        d = userNumber % 2;
        userNumber = userNumber / 2;
        if (d != 0)
        {
            pui = power(d, puissanc,10);
            c = d * pui;
            b = b + c;
        }
        puissanc++;
        if (userNumber == 0)
        {
            break;
        }
    }
    printf("%d", b);
}

void F__Binery_to_Dec(){
    long long int userNumber;
    printf("Enter Binery Number: ");
    scanf("%lld",&userNumber);
    int i = 0;
    float rest = 0;
    float realRest = 0;
    int d = 0;
    i = 0;
    while(1){
        int pui = power(1,i,10);
        i++;
        rest = userNumber / pui;
        realRest = (userNumber*1.0) - rest;
        int RealRest = power(realRest,1,10);
        d = power(RealRest,i,2);
        if(rest == 0 ){
            break;
        
        }
    }
    printf("d = %d\n",d);
}