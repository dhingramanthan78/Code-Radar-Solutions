#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a>=1){
        for (int i = 2; i * i <= a; i++) { 
        if (a % i == 0) { 
           int isPrime = 0; 
           printf("Prime");
            break;
        }
            

        }
    }else{
        printf("Not Prime");
    }
    return 0;
}