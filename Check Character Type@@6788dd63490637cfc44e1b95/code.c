#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    else if(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6||ch==7||ch==8||ch==9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }

}