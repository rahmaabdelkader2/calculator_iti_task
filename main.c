#include <stdio.h>
#include <stdint.h>

void Modulus(int32_t x, int32_t y);

int main ()
{
 int32_t x,y,result;
 Modulus(x,y);
}

void Modulus(int32_t x, int32_t y)
{
 if (y==0)
    {
        printf("dividing by zero is not allowed -__-");
    }
    else
    {
        int32_t result = x%y;
         printf("the remainder of %d by %d is %d",x,y,result);
    }
}