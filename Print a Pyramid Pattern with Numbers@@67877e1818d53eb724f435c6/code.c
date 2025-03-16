#include <stdio.h>
int main(){
    int num;
    scanf("%d ", &num);
    for (int i=1;i<=num;i++){
        int n=1;
        for (int k=1;k<=num-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}