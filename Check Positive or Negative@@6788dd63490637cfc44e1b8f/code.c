#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a==0){
        printf("Zero\n");
    }
    else-if(a>0){
        printf("Postive\n");
    }
    else{
        printf("Negative\n");
    }
    return 0;
}