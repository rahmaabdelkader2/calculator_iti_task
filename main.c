#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int multi(int x, int y) { 
    return x * y; 
}

int32_t Divide(int32_t Dividend, int32_t Divisor) {
    if (Divisor == 0) {
        return INT32_MIN;  
    }
    return Dividend / Divisor;
}

int main(void) {
    int a = 5;
    int b = 3;
    int multiplication = multi(a, b);
    printf("The product of %d * %d is = %d\n", a, b, multiplication);

    int32_t Num1 = 100;
    int32_t Num2 = 4;
    int32_t Res = Divide(Num1, Num2);
    printf("%d / %d = %d\n", Num1, Num2, Res);

    printf("%d / %d = %d\n", 10, 0, Divide(10, 0));

    return 0;
}
