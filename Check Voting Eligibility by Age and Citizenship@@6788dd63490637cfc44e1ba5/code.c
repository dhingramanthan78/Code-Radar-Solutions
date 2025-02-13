#include <stdio.h>
int main(){
    int age,citizen;
    scanf("%d %d", &age, & citizen);
    if(citizen==1 && age>=18){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
    return 0;
}