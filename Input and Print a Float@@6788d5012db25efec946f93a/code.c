#include <stdio.h>

int main() {
    float num;
    
   
    if (scanf("%f", &num) != 1) {
        printf("Invalid input\n");
        return 1; 
    }

    printf("You entered: %.2f\n", num);
    
    return 0;
}
