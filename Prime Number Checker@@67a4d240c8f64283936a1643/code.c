#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0; // Numbers less than 2 are not prime
    }
    for (int i = 2; i * i <= num; i++) { // Optimized loop (checks up to sqrt(num))
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

 int main() {
    int num;
    scanf("%d", &num);
    int arr[num]; 
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]); 
    }
    for (int i = 0; i < num; i++) {
        if (isPrime(arr[i])) {
            return 1;
        } else {
           return 0;
        }
    }

    return 0;
}
