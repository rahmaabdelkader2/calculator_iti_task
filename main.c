#include <stdio.h>
#include <stdint.h>


void Modulus(int32_t x, int32_t y);

int main ()
{
 int32_t x,y,result;
 Modulus(x,y);

int32_t subtraction(int32_t x, int32_t y);
int32_t Divide(int32_t Dividend, int32_t Divisor);
int32_t sum(int32_t num1,int32_t num2);
void Modulus(int32_t x, int32_t y);
int32_t multi(int32_t x, int32_t y);
int main(void)
{
    int32_t x = 0, y = 0;
    int32_t Res = 0;


    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    Res = subtraction(x, y); 
    printf("Subtraction Result: %d\n", Res);

  
    Res = Divide(x, y);
    printf("%d / %d = %d\n", x, y, Res);
    printf("Division Result: %d\n", Res);
	
	Res = sum(x,y);
    printf("SUM = %d\n",Res);

	Modulus(x,y);

  
    int32_t multiplication = multi(x, y);
    printf("\n The product of %d * %d is =%d\n", x, y, multiplication);
    

    return 0;

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

    return (Dividend / Divisor);
}
int32_t multi(int32_t x, int32_t y)
 { 
    int32_t result = x * y;
    return result; 
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

