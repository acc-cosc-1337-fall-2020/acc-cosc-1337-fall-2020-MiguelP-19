//cpp
#include "loops.h"

int factorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    
    return fact;
}