#include <stdio.h>
#include <stdint.h>

int32_t subtraction(int32_t x,int32_t y);

int main(void)
{
 int32_t x=0;int32_t y=0;
 int32_t result;
 scanf("%d %d",&x,&y);
 result =subtraction(x,y);
 printf("%d",result);

    return 0;
}

int32_t subtraction(int32_t x,int32_t y){
    int32_t result=x-y;
    return result;
}