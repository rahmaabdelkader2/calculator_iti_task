#include <stdio.h>
#include<stdint.h>


void Modulus(int32_t x, int32_t y);

int main()
{ 
    int32_t x,y,result=0;

    printf("Enter Two Numbers: ");
    scanf("%d %d",&x,&y);
    Modulus(x,y);

}

void Modulus(int32_t x, int32_t y)
{
    int Result;

    if (y==0)
{
    printf("division by zero is not allowed -__-");
}

else 
{
    Result = x%y;
    
    printf("%d",Result);
}
}