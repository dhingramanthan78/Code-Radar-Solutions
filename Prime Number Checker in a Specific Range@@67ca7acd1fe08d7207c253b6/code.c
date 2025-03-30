#include <stdio.h>
int PrimesInRange(int a,int b,int num){
    for(int i=a;i<=b;i++){
        if(num<2){
            return 0;
        }
        for (int i=2;i*i<=num;i++){
            if (num%i==0){
                printf("%d", i);
            }
        }
    }
}
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    PrimesInRange(a,b);
    return 0;
}