#include <stdio.h>

int main() {
    long long int userNumber;
    printf("Enter Binery Number: ");
    scanf("%lld", &userNumber);
    int i = 0;
    float rest = 0;
    float realRest = 0;
    int d = 0;
    i = 0;
    while (1)
    {
        int pui = power(1, i, 10);
        i++;
        rest = userNumber / pui;
        realRest = (userNumber * 1.0) - rest;
        int RealRest =  power(realRest, 1, 10);
        d = power(RealRest, i, 2);
        if (rest == 0)
        {
            break;
        }
    }
    printf("d = %d\n", d);
}
