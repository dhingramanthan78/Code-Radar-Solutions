#include <stdio.h>
int main(){
    int num;
    scanf("%d ", &num);
    int n=1;
    for (int i=1;i<=num;i++){
        for (int j=1;j<=i;j++){
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}