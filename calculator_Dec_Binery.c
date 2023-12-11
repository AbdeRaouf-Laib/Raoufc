#include <stdio.h>
#include <stdbool.h>

unsigned long int
power(unsigned long int Number, int puissane, int multi){
    if (puissane == 0)
        return Number;
    return Number * multi * power(Number, puissane - 1, multi);
}
bool verfiction(unsigned long int bin){
    int decimal = 0, remainder = 0, base = 1;
    while (bin > 0)
    {
        remainder = bin % 10;
        if (remainder > 1 || remainder < 0)
            return false;
        decimal += remainder * base;
        base *= 2;
        bin /= 10;
    }
    return true;
}

int F__Dec_to_Binery(){
    unsigned long int userNumber;
    do{
        printf("Enter number: ");
        scanf("%llu", &userNumber);
    } while (userNumber < 0 || userNumber > 524287);
    int d = 0;
    int puissanc = 0;
    unsigned long int c = 0, b = 0, pui = 0;
    while (1){
        d = userNumber % 2;
        if (d != 0){
            pui = power(d, puissanc, 10);
            c = d * pui;
            b = b + c;
        }
        userNumber = userNumber / 2;
        puissanc++;
        if (userNumber == 0){
            break;
        }
    }
    if (!verfiction(b)){
        printf("\n\nwrong!!!\n\n");
        return 0;
    }
    printf("\nbinery result: %lld\n", b);
}

void F__Binery_to_Dec(){
    unsigned long int userNumber;
    bool ver;
    do{
        printf("Enter Binery Number: ");
        scanf("%lld", &userNumber);
        ver = verfiction(userNumber);
    } while (!ver);

    unsigned long decimal = 0;
    int remainder = 0, base = 1;
    while (userNumber > 0){
        remainder = userNumber % 10;
        decimal += remainder * base;
        base *= 2;
        userNumber /= 10;
    }
    printf("Decimal result: %llu\v", decimal);
}

/*main function*/
int main(){
    printf("\nWelcome to the binary system calculator software!!! are you ready!?\n\n");
    printf("Choose from the following list: \n");
    printf("\
    \t-1) convert Dec to Binery: \n\
    \t-2) convert Binery to Dec: \n\v");
    int userChoise;
    do{
        printf("Enter you choice(Number 1-2): ");
        scanf("%d", &userChoise);
    } while (userChoise < 1 || userChoise > 2);
    printf("\n");
    if (userChoise == 1){
        printf("\vWARNING:\n\
    -you should input integer and positive (Naturel) number.\n\
    -you should input number less or equal then 524287. \n\v");
        F__Dec_to_Binery();
    }
    else if (userChoise == 2){
        printf("\vWARNING:\n\
    -you should input a binery number.\n\
    -you should input number less or equal then 1111111111111111111.\n\v");
        F__Binery_to_Dec();
    }
    printf("\n\nThank you so much for using me.\n\
Wait for more updates inshaallah.\n\n");
    printf("developed By AbdeRaouf-Laib@2023 All rights reserved!!!");
}
