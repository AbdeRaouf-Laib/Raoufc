#include <stdio.h>
#include <stdbool.h>

unsigned int 
power(unsigned int  Number, int puissane, int multi)
{
    if (puissane == 0)
        return Number;
    return Number * multi * power(Number, puissane - 1, multi);
}
bool verfiction(unsigned int  bin)
{
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

int F__Dec_to_Binery()
{
    unsigned int  userNumber;
    do
    {
        printf("Enter number: ");
        scanf("%llu", &userNumber);
    } while (userNumber < 0 || userNumber > 524287);
    int d = 0;
    int puissanc = 0;
    unsigned int  c = 0, b = 0, pui = 0;
    while (1)
    {
        d = userNumber % 2;
        if (d != 0)
        {
            pui = power(d, puissanc, 10);
            c = d * pui;
            b = b + c;
        }
        userNumber = userNumber / 2;
        puissanc++;
        if (userNumber == 0)
        {
            break;
        }
    }
    if (!verfiction(b))
    {
        printf("\n\nwrong!!!\n\n");
        return 0;
    }
    printf("\nbinery result: %lld\n", b);
}

void F__Binery_to_Dec()
{
    unsigned int  userNumber;
    bool ver;
    do
    {
        printf("Enter Binery Number: ");
        scanf("%lld", &userNumber);
        ver = verfiction(userNumber);
    } while (!ver);

    unsigned long decimal = 0;
    int remainder = 0, base = 1;
    while (userNumber > 0)
    {

        remainder = userNumber % 10;
        decimal += remainder * base;
        base *= 2;
        userNumber /= 10;
    }
    printf("Decimal result: %llu\v", decimal);
}

void F__ascii_to_Dec()
{
    char ascii1[1500];
    printf("Enter ASCII: ");
    gets(ascii1);
    gets(ascii1);
    int i = 0;
    while (ascii1[i] != '\0')
    {
        printf("%d-", ascii1[i]);
        i++;
    }
}
int F__ascii_to_binery()
{
    char ascii2[1500];
    int i = 0;
    printf("Enter ASCII: ");
    gets(ascii2);
    gets(ascii2);
    printf("\n");
    while (ascii2[i] != '\0')
    {
        int d = 0;
        int puissanc = 0;
        unsigned int  c = 0, b = 0, pui = 0;
        while (1)
        {
            d = ascii2[i] % 2;
            if (d != 0)
            {
                pui = power(d, puissanc, 10);
                c = d * pui;
                b = b + c;
            }
            ascii2[i] = ascii2[i] / 2;
            puissanc++;
            if (ascii2[i] == 0)
            {
                break;
            }
        }
        if (!verfiction(b))
        {
            printf("\n\nwrong!!!\n\n");
            return 0;
        }
        printf("%lld-", b);
        i++;
    }
    printf("\n\n");
}
int F__Binery_to_ASCII()
{
    unsigned int  Binery;
    int i = 0;
    unsigned int T[1500];
    while (1)
    {
        printf("Enter Binery Number: between(100000-1111110)");
        scanf("%llu", &Binery);
        if (!verfiction(Binery) || Binery < 100000 || Binery > 1111110)
        {
            printf("ASCII code: ");
            for (int j = 0; j < i; j++)
            {
                printf("\n%d %c", T[j], T[j]);
            }
            printf("\n");
            return 0;
        }
        unsigned long decimal = 0;
        int remainder = 0, base = 1;
        while (Binery > 0)
        {
            remainder = Binery % 10;
            decimal += remainder * base;
            base *= 2;
            Binery /= 10;
        }
        T[i] = decimal;
        i++;
    }
}
/*main function*/
int main()
{
    char exit;
 
        printf("\nWelcome to the binary system calculator software!!! are you ready!?\n\n");
        printf("Choose from the following list: \n");
        printf("\
    \t-1) convert Dec to Binery: \n\
    \t-2) convert Binery to Dec: \n\
    \t-3) convert ASCII code to Dec\n\
    \t-4) convert ASCII code to Binery\n\
    \t-5) convert Binery to ASCII code\n\
    \v");
        int userChoise;
        do
        {
            printf("Enter you choice(Number 1-2-3-4-5): ");
            scanf("%d", &userChoise);
        } while (userChoise < 1 || userChoise > 5);
        printf("\n");
        if (userChoise == 1)
        {
            printf("\vWARNING:\n\
    -you should input integer and positive (Naturel) number.\n\
    -you should input number less or equal then 524287. \n\v");
            F__Dec_to_Binery();
        }
        else if (userChoise == 2)
        {
            printf("\vWARNING:\n\
    -you should input a binery number.\n\
    -you should input number less or equal then 1111111111111111111.\n\v");
            F__Binery_to_Dec();
        }
        else if (userChoise == 3)
        {
            F__ascii_to_Dec();
        }
        else if (userChoise == 4)
            F__ascii_to_binery();
        else if (userChoise == 5)
            F__Binery_to_ASCII();

        printf("\n\nThank you so much for using me.\n\
Wait for more updates inshaallah.\n\n");
        printf("developed By AbdeRaouf-Laib@2023 All rights reserved!!!");
}
