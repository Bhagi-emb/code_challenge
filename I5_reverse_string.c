/*Write a Program to reverse a number*/

#include<stdio.h>

int main()
{
    char str[] = "hello";
    int size = sizeof(str)/sizeof(str[0])-1;
    char str1[10];
    printf(" %s \n",str);
    for(int i=0 ; i < size ; i++)
    {
        str1[i] = str[size-1-i];
    }
    str1[size] = '\0'; 
    printf(" %s \n",str1);

    return 0;
}
//size--; can't be done if not only reflect str1[i] = str[size-i]; but also for loop condtion