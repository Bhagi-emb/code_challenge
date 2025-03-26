/*Write a Program to convert the binary number into a decimal number*/

#include<stdio.h>

int main()
{
    int num = 1111,dec =0;
    int pow = 1;
    while(num != 0)
    {
        dec = dec + (num%10) *pow;
        num = num /10;
        pow = pow*2;
    }
    printf("%d \n", dec);
    return 0;
}

/*
1011/10 => quotient:11 : remeinder : 1
*/