#include <stdio.h>
#include <ctype.h>
int main(){
    char alpha;
    scanf("%c", &alpha);
    if (isupper(alpha)){
        printf("Uppercase");
    } else if{
        printf("Lowercase");
    }
    return 0;
}