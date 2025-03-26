
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void fn_mem(void *dest,void *src, size_t len)
{
    int size = 0;
    size = sizeof(*(int*)src);
    int int_bit= len/4 , inc=0;

    switch (size)
    {
    case 1:  //char
        strcpy((char*)dest,(char*)src);
        break;
    case 4:  //int

        for(int i=0;i<len;i++)
        {
            if((i%4 == 0)) 
            {
                ((int*)dest)[inc] =  ((int*)src)[inc];
                inc++;
                //printf("arr: %d \n",((int*)dest)[i]);
            }
        }  

        break;
    default:
        break;
    }
}

int main()
{
    char str[10] = "hello";
    char str1[20];
    int size = sizeof(str)/sizeof(str[0]);

    fn_mem(str1,str,size);
    printf("arr: %s \n",str1);


    int arr[10]={2,3,4,5};
    int arr1[10];
    

   fn_mem(arr1,arr,16);

    for(int i=0; i<4; i++)
    {
        printf("arr: %d \n",arr1[i]);
    }

    return 0;
}                                        