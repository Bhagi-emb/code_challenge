#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *ptr = (int*)malloc(2 * sizeof(int)); // Allocate memory for two indices
    if (!ptr) return NULL; // Check for memory allocation failure

    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) { // Avoid checking the same pair twice
            if (nums[i] + nums[j] == target) {
                ptr[0] = i;  // Store index of first number
                ptr[1] = j;  // Store index of second number
                *returnSize = 2; // Set return size
                return ptr;  // Return allocated array
            }
        }
    }

    // No pair found, free memory and return NULL
    free(ptr);
    *returnSize = 0;
    return NULL;
}

// Example usage
int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    
    int* result = twoSum(nums, 4, target, &returnSize);
    
    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result); // Free allocated memory after use
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
