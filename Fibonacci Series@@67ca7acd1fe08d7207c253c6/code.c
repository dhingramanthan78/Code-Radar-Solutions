#include <stdio.h>
void fibonacciSeries(int n){
    int a=0;
    int b=1;
    int next;
    for (int i=0;i<n;i++){
        next=a+b;
        a=b;
        b=next;
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    if (n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}