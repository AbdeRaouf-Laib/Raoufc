#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

unsigned int userChoise1;
unsigned int userChoise2;

unsigned long int power( int puissanc , int multi ) {
    unsigned long int pui = 1;
    for (int i = puissanc; i > 0; i--) {
        pui *= multi;
    }
    return pui;
}

void convertDecToBinaryMethod1( unsigned long int userNumber ) {
    int i = 0;

    unsigned int binaryTable[sizeof( userNumber ) * 8];
    while (userNumber > 0) {
        if (userNumber % 2 == 0) {
            binaryTable[i] = 0;
            userNumber /= 2 , ++i;
        }
        else if (userNumber % 2 == 1) {
            binaryTable[i] = 1;
            userNumber /= 2 , ++i;
        }
    }
    --i;
    printf( "base 2: " );
    while (i >= 0) {
        printf( "%d" , binaryTable[i] ) , i--;
    }
    printf( "\n" );
}
void convertDecToOctalMethod1( unsigned long int userNumber ) {
    int i = 0;
    unsigned int octalTable[sizeof( userNumber ) * 8];
    while (userNumber > 0) {
        if (userNumber % 8 == 0) {
            octalTable[i] = 0;
            userNumber /= 8 , ++i;
        }
        else if (userNumber % 8 == 1) {
            octalTable[i] = 1;
            userNumber /= 8 , ++i;
        }
        else if (userNumber % 8 == 2) {
            octalTable[i] = 2;
            userNumber /= 8 , ++i;
        }
        else if (userNumber % 8 == 3) {
            octalTable[i] = 3;
            userNumber /= 8 , ++i;
        }
        else if (userNumber % 8 == 4) {
            octalTable[i] = 4;
            userNumber /= 8 , ++i;
        }
        else if (userNumber % 8 == 5) {
            octalTable[i] = 5;
            userNumber /= 8 , ++i;
        }
        else if (userNumber % 8 == 6) {
            octalTable[i] = 6;
            userNumber /= 8 , ++i;
        }
        else if (userNumber % 8 == 7) {
            octalTable[i] = 7;
            userNumber /= 8 , ++i;
        }
        else if (userNumber % 8 == 8) {
            octalTable[i] = 8;
            userNumber /= 8 , ++i;
        }
    }
    --i;
    printf( "base 8: " );
    while (i >= 0) {
        printf( "%o" , octalTable[i] ) , i--;
    }
    printf( "\n" );
}
void convertDecToHexaDecMethod1( unsigned long int userNumber ) {
    int i = 0;
    unsigned int hexaTable[sizeof( userNumber ) * 8];
    while (userNumber > 0) {
        if (userNumber % 16 == 0) {
            hexaTable[i] = 0;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 1) {
            hexaTable[i] = 1;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 2) {
            hexaTable[i] = 2;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 3) {
            hexaTable[i] = 3;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 4) {
            hexaTable[i] = 4;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 5) {
            hexaTable[i] = 5;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 6) {
            hexaTable[i] = 6;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 7) {
            hexaTable[i] = 7;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 8) {
            hexaTable[i] = 8;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 9) {
            hexaTable[i] = 9;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 10) {
            hexaTable[i] = 10;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 11) {
            hexaTable[i] = 11;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 12) {
            hexaTable[i] = 12;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 13) {
            hexaTable[i] = 13;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 14) {
            hexaTable[i] = 14;
            userNumber /= 16 , ++i;
        }
        else if (userNumber % 16 == 15) {
            hexaTable[i] = 15;
            userNumber /= 16 , ++i;
        }
    }
    --i;
    printf( "base 16: " );
    while (i >= 0) {
        printf( "%x" , hexaTable[i] ) , i--;
    }
    printf( "\n" );
}
void convertDecToOtherBases( /*base*/unsigned int base ,/*userNumber*/unsigned long int userNumber ) {

    int puissanc = 0;
    unsigned long long result = 0;

    while (userNumber > 0) {
        int rest = userNumber % base;
        if (rest != 0) {
            unsigned long long pui = power( puissanc , 10 );
            unsigned long long c = rest * pui;
            result = result + c;
        }
        userNumber = userNumber / base;
        puissanc++;
    }

    printf( "base %d: %llu\n\n" , base , result );
}

unsigned long int convertBinaryToDec( unsigned long int userNumber ) {
    unsigned long int decimal = 0;
    int remainder = 0 , base = 1;

    while (userNumber > 0) {
        remainder = userNumber % 10;
        decimal += remainder * base;
        base *= 2;
        userNumber /= 10;
    }
    if (userChoise2 == 5)
        printf( "base 10: %llu" , decimal );
    return decimal;
}
void convertBinaryToOctal( unsigned long int userNumber1 ) {
    unsigned long int userNumber = convertBinaryToDec( userNumber1 );
    convertDecToOctalMethod1( userNumber );

}
void convertBinaryToHexaDec( unsigned long int userNumber1 ) {
    unsigned long int userNumber = convertBinaryToDec( userNumber1 );
    convertDecToHexaDecMethod1( userNumber );
}
void convertBinaryToOterBases( unsigned long int userNumber1 ) {
    unsigned long int userNumber = convertBinaryToDec( userNumber1 );
    for (int i = 3; i <= 9; i++)
        convertDecToOtherBases( i , userNumber );
    convertDecToHexaDecMethod1( userNumber );
}

unsigned long int convertOctalToDec( unsigned long int userNumber ) {

    printf( "Enter Octal Number: " );
    scanf( "%llu" , &userNumber );

    unsigned long decimal = 0;
    int remainder = 0 , base = 1;

    while (userNumber > 0) {
        remainder = userNumber % 10;
        decimal += remainder * base;
        base *= 8;
        userNumber /= 10;
    }
    if (userChoise2 == 9)
        printf( "base 10: %llu" , decimal );
    return decimal;
}
void convertOctalToBinary( unsigned long int userNumber1 ) {
    unsigned long int userNumber = convertOctalToDec( userNumber1 );
    convertDecToOctalMethod1( userNumber );
}
void convertOctalToHexaDec( unsigned long int userNumber1 ) {
    unsigned long int userNumber = convertOctalToDec( userNumber1 );
    convertDecToHexaDecMethod1( userNumber );
}
void convertOctalToOtherBases( unsigned long int userNumber1 ) {
    unsigned long int userNumber = convertOctalToDec( userNumber1 );
    for (int i = 2; i <= 9; i++) {
        if (i == 8)
            continue;
        convertDecToOtherBases( i , userNumber );
    }
    convertDecToHexaDecMethod1( userNumber );
}


bool verificationBinary( unsigned long int  bin ) {
    int decimal = 0 , base = 1;
    unsigned long int remainder = 0;
    while (bin > 0) {
        remainder = bin % 10;
        if (remainder > 1 || remainder < 0)
            return false;
        decimal += remainder * base;
        base *= 2;
        bin /= 10;
    }
    return true;
}
bool verificationOctal( unsigned long int  bin ){
    int decimal = 0 , base = 1;
    unsigned long int remainder = 0;
    while (bin > 0) {
        remainder = bin % 10;
        if (remainder > 7 || remainder < 0)
            return false;
        decimal += remainder * base;
        base *= 8;
        bin /= 10;
    }
    return true;
}

unsigned long int inputDecNumber() {
    unsigned long int userNumber;
    unsigned int ver;
    do {
        printf( "Enter Number: " );
        ver = scanf( "%lu" , &userNumber );
        if (!ver) {
            printf( "\n\nInvalid Input!!!\n\n" );
            return 0;
        }
    }
    while (userNumber > ULONG_MAX);
    printf( "\n\n" );
    return userNumber;
}
unsigned long int inputBinaryNumber() {
    unsigned long long userNumber;
    printf( "\vWARNING:\n\
    -you should input a binary number.\n\
    -you should input number less or equal to 1111111111111111111.\n\v" );

    do {
        printf( "Enter Binery Number: " );
        scanf( "%lld" , &userNumber );
    }
    while (!verificationBinary( userNumber ));
    return userNumber;
}
unsigned long int inputOctalNumber(){
    unsigned long long userNumber;
    do{
        printf( "Enter Octal Number: " );
        scanf( "%llu" , &userNumber );
    }while(!verificationOctal(userNumber));
    return userNumber;
}



void displayDeviceSetting() {
    printf( "Device Setting: \n" );
    printf( "\tCPU archi X%dbit\n" , sizeof( long ) * 8 );
    if (sizeof( long ) * 8 == sizeof( int ) * 8)
        printf( "\tMaximum value an `unsigned int' can hold: %u\n" , UINT_MAX );
    else if ((sizeof( long ) * 8 != sizeof( int ) * 8))
        printf( "\tMax intValue: %lu\n" , ULONG_MAX );
    /*printf("\tMax floatValue: %f\n\n",);*/
}

void displayRulesAndChoise( unsigned int Rules , unsigned int choiseRules ) {
    if (Rules == 1)
        printf( "\
    \t-1)  convert Dec to Binary: \n\
    \t-2)  convert Dec to Octal: \n\
    \t-3)  convert Dec to HexaDec: \n\
    \t-4)  convert Dec to All Base(2-9 and 16): \n\
    \t-5)  convert Binary to Dec\n\
    \t-6)  convert Binary to Octal\n\
    \t-7)  convert Binary to HexaDec\n\
    \t-8)  convert Binary to All Base(3-9 and 16): \n\
    \t-9)  convert Octal to Dec\n\
    \t-10) convert Octal to Binary\n\
    \t-11) convert Octal to HexaDec\n\
    \t-12) convert Octal to All Base((3-9) and 16)\\8):\n\
    \v" );
    else if (Rules == 2) {

    }
}

int F__userChoise2() {
    unsigned int ver;
    unsigned long int userNumber;
    displayRulesAndChoise( 1 , 0 );
    do {
        printf( "Enter your choise: " );
        ver = scanf( "%d" , &userChoise2 );
        if (!ver) {
            printf( "\n\nInvalid Input!!!\n\n" );
            return 0;
        }
    }
    while (userChoise2 < 0 || userChoise2 > 17);
    switch (userChoise2) {
        case 1:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputDecNumber();
            convertDecToBinaryMethod1( userNumber );
            break;
        case 2:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputDecNumber();
            convertDecToOctalMethod1( userNumber );
            break;
        case 3:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputDecNumber();
            convertDecToHexaDecMethod1( userNumber );
            break;
        case 4:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputDecNumber();
            for (int i = 2; i <= 9; i++)
                convertDecToOtherBases( i , userNumber );
            convertDecToHexaDecMethod1( userNumber );
            break;
        case 5:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputBinaryNumber();
            convertBinaryToDec( userNumber );
            break;
        case 6:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputBinaryNumber();
            convertBinaryToOctal( userNumber );
            break;
        case 7:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputBinaryNumber();
            convertBinaryToHexaDec( userNumber );
            break;
        case 8:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputBinaryNumber();
            convertBinaryToOterBases( userNumber );
            break;
        case 9:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputOctalNumber();
            convertOctalToDec( userNumber );
            break;
        case 10:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputOctalNumber();
            convertOctalToBinary( userNumber );
            break;
        case 11:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputOctalNumber();
            convertOctalToHexaDec( userNumber );
            break;
        case 12:
            displayRulesAndChoise( 0 , 1 );
            userNumber = inputOctalNumber();
            convertBinaryToOterBases( userNumber );
            break;
        case 13:
            displayRulesAndChoise( 0 , 1 );
            break;
        case 14:
            displayRulesAndChoise( 0 , 1 );
            break;
        case 15:
            displayRulesAndChoise( 0 , 1 );
            break;
        case 16:
            displayRulesAndChoise( 0 , 1 );
            break;
        case 17:
            displayRulesAndChoise( 0 , 1 );
            break;
        default:
            break;
    }
}
/*
int F__userChoise3() {
    unsigned int userChoise3;
    displayRulesAndChoise( 2 , 0 );
    do {
        printf( "Enter your choise: " );
        ver = scanf( "%d" , &userChoise3 );
    }
    while (!ver || userChoise3 < 0 || userChoise3 > 2);
    switch (userChoise3) {
        case 1:
            displayRulesAndChoise( 2 , 1 );
            break;
        default:

            break;
    }
}
*/
int F__userChoise1() {

    bool ver = 1;
    printf( "\
    \t-1) Converting:\n\
    \t-2) Calculating:\n\n" );
    do {
        printf( "Enter Your choise: " );
        ver = scanf( "%d" , &userChoise1 );
        if (!ver) {
            printf( "\n\nInvalid Input!!!\n\n" );
            return 0;
        }
    }
    while (userChoise1 < 0 || userChoise1 > 2);
    if (userChoise1 == 1)
        ver = F__userChoise2();
    /*else if (userChoise1 == 2)
        F__userChoise3();
*/
    if (ver == 0)
        return 0;
}


int main() {
    displayDeviceSetting();
    F__userChoise1();
}