#include <stdio.h>
int isPrime(int num) {
    if (num < 2) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}
void PrimesInRange(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i); 
        }
    }
    printf("\n");
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    PrimesInRange(a, b);
    return 0;
}
