#include <stdio.h>
int main(){
    int a,b,result;
    scanf("%d %d" &a, &b);
    result=a^b;
    a=a^b;
    b=a^b;
    printf("%d %d",a,b);
    return 0;
}