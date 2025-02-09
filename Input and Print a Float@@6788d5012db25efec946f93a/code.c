#include <stdio.h>

int main() {
    float num;
    
    // Check if scanf successfully reads a float
    if (scanf("%f", &num) != 1) {
        printf("Invalid input\n");
        return 1; // Exit with an error code
    }

    printf("%.2f\n", num);
    
    return 0;
}
