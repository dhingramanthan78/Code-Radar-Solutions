#include <stdio.h>
int main(){
    float num;
   if( scanf("%.2f", &num)!=1){
    return 1;
   }
    printf("%.2f",num);
    return 0;
}