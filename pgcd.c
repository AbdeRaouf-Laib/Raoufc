#include <math.h>
#include <stdio.h>

int main()
{
    int a, b ;
    printf("enter a and b: ");
    scanf("%d",&a);
    scanf("%d",&b);
    int result;
    if(a < b)
        result = a;
    else
        result = b; 
    while (result > 0)
    {
        // Check if both a and b are divisible by result
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    printf("pgcd = %d ",result);
    return 0;
}

