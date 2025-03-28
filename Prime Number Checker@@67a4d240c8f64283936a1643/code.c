#include <stdio.h>
void isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; 
}

int main(){
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
