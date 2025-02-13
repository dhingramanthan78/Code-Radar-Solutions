#include <stdio.h>
int main(){
    int a,b,result;
    char operation;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c", &operation);
    switch(operation){
        case '+':
         result=a+b;
         printf(result);
         break;
        case '-':
         result=a-b;
         printf(result);
         break;
        case '*':
         result=a*b;
         printf(result);
         break;
        case '/':
           if (b!=0){
            result=a/b;
            printf(result);
            break;
           }
           else{
            printf("The Division of the number is not possible\n");
            break;
           }
         default:
          printf("error");
    }
}
    