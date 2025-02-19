#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) 
        return false;  // 1 and below are not prime
    if (n == 2) 
        return true;   // 2 is prime
    if (n % 2 == 0) 
        return false;  // even numbers greater than 2 are not prime

    // Check odd factors from 3 until i * i > n
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    printf("Prime numbers between 1 and 10 are: ");
    for (int num = 1; num <= 25; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
