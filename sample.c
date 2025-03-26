#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array with 5 elements
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements

    printf("Total elements in array: %d\n", size);
    return 0;
}

