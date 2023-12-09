/*/*This code is able to convert alphabet character into Morse code*/

#include <stdio.h> 
#include <string.h>
typedef struct Morse_code{
    char charVlaue;
    char* morseValue; 
}Morse;
int main(){
    Morse TAlephaMorse[] = {{' ',"  "},{'1' ,". _ _ _ _ "}, {'2' ,". . _ _ _ "}, {'3' ,". . . _ _ "}, {'4' ,". . . . _ _ "}, {'5' ,". . . . . "}, {'6' ,"_ . . . . "}, {'7' ,"_ _ . . . "}, {'8' ,"_ _ _ . . "}, {'9' ,"_ _ _ _ . "}, {'0' ,"_ _ _ _ _ "}, {'a' ,". _  "}, {'b' ,"_ . . . "}, {'c' ,"_ . _ . "}, {'d' ,"_ . . "}, {'e' ,". "}, {'f' ,". . _ . "}, {'g' ,"_ _ . "}, {'h' ,". . . . "}, {'i' ,". . "}, {'j' ,". _ _ _ "}, {'k' ,"_ . _ "}, {'l' ,". _ . . "}, {'m' ,"_ _ "}, {'n' ,"_ . "}, {'o' ,"_ _ _ "}, {'p' ,". _ _ . "}, {'q' ,"_ _ . _ "}, {'r' ,". _ . "}, {'s' ,". . . "} ,{'t' ,"_ "}, {'u' ,". . _ "}, {'v' ,". . . _ "}, {'w' ,". _ _ "}, {'x' ,"_ . . _ "}, {'y' ,"_ . _ _ "}, {'z', "_ _ . . "},{':',": "},{')',") "}};
    char stringUserValue[150];
    printf( "Enter string: ");
    gets(stringUserValue);
    printf("printf(\"");
    for (int i = 0;stringUserValue[i] != '\0' ; i++){
        for(int j = 0; j < 36;j++){
            if(stringUserValue[i] == TAlephaMorse[j].charVlaue){
                printf("%s ",TAlephaMorse[j].morseValue);
            }
        }
    }
}/*
    for (int i = 0; i < stringUserValue[i] != '\0';i++){
        if(stringUserValue[i] == ' '){
            stringUserValue[i] = '\0';
        }
    }
    for (int i = 0; stringUserValue[i] != '\0'; ){
            for (int j = 0; j < 36; j++){
                if (strcmp(stringUserValue,TAlephaMorse[i].morseValue))
                {
                    printf("%s ", TAlephaMorse[j].charVlaue);
                }
            }
        }
    printf("\");");
}/*
#include <stdio.h>
#include <math.h>

int main(){
    int p;/*declration of p*
    int a;/*declration of a*  
    k = paw(a,p),
    printf("a is: %d",k);
}*/