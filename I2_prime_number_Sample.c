/* Write a Program to check whether a number is prime or not. */
#include<stdio.h>
#include<stdbool.h>


bool prime(int num)
{
    if(num < 2)   //eliminate negtive & 0,1
        return false;
    if(num == 2)    //default 2
        return true;
    if(num %2 == 0) //eliminate even numbers
        return false;
   for (int i=2; (i*i)<= num ;i++ )
   {
        if(num%i == 0)
            return false;
   }
   return true;
}

int main()
{
    int num = 13;
    
    if(prime(num))
    {
        printf(" num : %d is prime \n",num);
    }
    else
        printf(" num : %d is not prime \n",num);
    return 0;
}