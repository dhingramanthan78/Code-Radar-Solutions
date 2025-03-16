#include <stdio.h>
int main(){
    int num;
    scanf("%d ", &num);
    char ch='A';
    for (int i=1;i<=num;i++){
        for(int j=num;j<=i;j--){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}