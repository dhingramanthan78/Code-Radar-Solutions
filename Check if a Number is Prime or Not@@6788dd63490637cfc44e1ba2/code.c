#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
   for (int i=2;i<a;i++){
    if(num%i==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
   }
   return 0;
}