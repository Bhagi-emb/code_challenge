/* Write a Program in C to Swap the values of two variables without using any extra variable*/

#include<stdio.h>
#include<math.h>

void swap1(int a,int b)
{
    printf("\nswap 1: before swap : %d %d \n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("swap 1:  After swap : %d %d\n",a,b);
}
void swap2(int a,int b)
{
    printf("swap 2: before swap : %d %d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("swap 2:  After swap : %d %d\n",a,b);
}
void swap3(int a,int b)
{
    printf("swap 3: before swap : %d %d\n",a,b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("swap 3:  After swap : %d %d\n",a,b);
}
void p_swap(int *a,int *b)
{
    int temp =0;
    temp = *a;
    *a = *b;
    *b = temp; 
}

int main()
{
    swap1(3,2);
    swap2(33,88);
    swap3(4,3);

    int a1 =2,b1=3;
    printf("p_swap:  before swap : %d %d \n",a1,b1);
    p_swap(&a1,&b1);
    printf("p_swap:  After swap : %d %d \n",a1,b1);
    return 0;
}