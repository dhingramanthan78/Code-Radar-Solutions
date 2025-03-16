#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for (int i=1;i<=num;i++){
        char ch='A';
        for(int j=num;j<=num-i;j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}