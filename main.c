#include <stdio.h>
#include <stdint.h>

int32_t Divide(int32_t Dividend, int32_t Divisor);

int main(void)
{
    int32_t Res = 0, Num1 = 100, Num2 = 4;

    Res = Divide(Num1, Num2);

    printf("%d / %d = %d\n", Num1, Num2, Res);
    printf("%d / %d = %d\n", 10, 0, Divide(10, 0));

    return 0;
}

int32_t Divide(int32_t Dividend, int32_t Divisor)
{
    if (0 == Divisor)
    {
        return INT32_MIN;
    }

    return (Dividend / Divisor);
}
