// C Program to find 
// Largest of three numbers

#include <stdio.h>
int main()
{
    int arr[] = {4,7,22,9,45,22},large_num,small_num;
    int size = sizeof(arr)/sizeof(arr[0]);

    large_num = arr[0];
    small_num = arr[0];
    for(int i=0; i< size ;i++)
    {
        if(arr[i] > large_num)     
        {
            large_num = arr[i];
        }
        if(arr[i] < small_num)
        {
            small_num = arr[i];
        }
    }
    printf("arr[%d] : large num :%d \n",size,large_num);
    printf("arr[%d] : small num :%d \n",size,small_num);
    return 0;
}