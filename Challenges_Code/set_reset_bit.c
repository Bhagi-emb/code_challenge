#include <stdio.h>
#include <stdint.h>

#define SET   1
#define RESET 0

// Function to get buffer index for the given bit position
int buff_pos(int pos) {
    return pos / 8;  // Each uint8_t has 8 bits
}

// Function to perform set/reset operation on the given bit position
void function_oper(uint8_t num[], int op, int pos) {
    int buf = buff_pos(pos); // Get the buffer index
    int bit_position = pos % 8; // Get the bit position within the byte

    if (op == SET) {
        num[buf] |= (1 << bit_position);  // Set the bit
    } 
    else if (op == RESET) {
        num[buf] &= ~(1 << bit_position); // Reset the bit
    } 
    else {
        printf("Invalid operation\n");
        return;
    }

    printf("After operation, num[%d] = 0x%02X\n", buf, num[buf]);
}

int main() {
    uint8_t num[50] = {0}; // Initialize buffer to zero
    int pos = 38;  // Example bit position

    printf("Setting bit position %d\n", pos);
    function_oper(num, SET, pos);  // Set bit at position 38

    printf("Resetting bit position %d\n", pos);
    function_oper(num, RESET, pos);  // Reset bit at position 38

    return 0;
}
