#include <stdio.h>
int main(){
    int a,b,result;
    char operation;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &operation);
    switch(operation){
        case '+':
         result=a+b;
         printf("%d",result);
         break;
        case '-':
         result=a-b;
         printf("%d",result);
         break;
        case '*':
         result=a*b;
         printf("%d",result);
         break;
        case '/':
            result=a/b;
            printf("%d",result);
            break;
        default:
          printf("error");
    }
}
    