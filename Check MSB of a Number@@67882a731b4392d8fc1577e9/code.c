#include <stdio.h>
int main(){
    int num,ms;
    ms=1<<31;
    scanf("%d", &num);
    if(num & ms){
        printf("Set\n");
    }
    else{
        printf("Not set\n");
    }
    return 0;
}