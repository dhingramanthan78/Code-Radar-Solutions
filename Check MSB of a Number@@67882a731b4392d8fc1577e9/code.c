#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num % 2==0){
        printf("Set\n");
    }
    else{
        printf("Not set\n");
    }
    return 0;
}