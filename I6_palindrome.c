/*Check whether a number is a palindrome*/

#include<stdio.h>
#include<stdbool.h>

// rev (char *str1, char *str2)
// {
//     int size = sizeof(str)/sizeof(str[0])-1;
//     char str1[10];
//     printf(" %s \n",str);
//     for(int i=0 ; i < size ; i++)
//     {
//         str1[i] = str[size-1-i];
//     }
//     str1[size] = '\0'; 
// }
// bool pal1(char num[])
// {

// }
bool pal2(int num)
{
   int N = 0,temp = num;

    while(temp != 0)
    {
        N = N*10 + (temp %10);
        temp = temp/10;
    }
    if (num == N)
    return true;
    else
    return false;
}

int main()
{
    //char num[]="13431";
    int num1 = 13431, num2 = 12345;

    // if(pal1(num))
    //     printf("%d is palindrome\n", num);
    // else
    //     printf("%d is not a palindrome\n", num);

    if(pal2(num1))
        printf("%d is palindrome\n", num1);
    else
        printf("%d is not a palindrome\n", num1);

    if(pal2(num2))
        printf("%d is palindrome\n", num2);
    else
        printf("%d is not a palindrome\n", num2);
    
}
