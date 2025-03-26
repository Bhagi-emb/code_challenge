/*Write a Program to Replace all 0’s with 1’s in a Number.*/
#include<stdio.h>
// Function to print binary representation
//decimal to binary
void printBinary(unsigned int num) {
    for (int i = 4; i >= 0; i--) {  // Loop through 32 bits (for int)
        printf("%d", (num >> i) & 1); // Extract and print each bit
    }
    printf("\n");
}

int main()
{
    int num = 0x4;
    num = num ^ 0xF;
    printf("hexa : %x \n",num); //hexa 
    printf("hexa : %d \n",num); //dec
    printBinary(num);

}