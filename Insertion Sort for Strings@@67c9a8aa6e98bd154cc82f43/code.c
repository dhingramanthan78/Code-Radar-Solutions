#include <stdio.h>
#include <string.h>
void insertionsort(char arr[][100],int n){
    for (int i=1;i<n;i++){
        char key[100];
        strcpy(key;arr[i]);
        int j=i-1;
        while(j>=0 && strcmp(arr[j],key)>0){
            strcpy(arr[j+1],arr[j]);
            j=j-1;
        }
        strcpy(arr[j+1],key);
    }
}
void printarray(char arr[][100],int n){
    for (int i=0;i<n;i++){
        printf("%s", arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    char arr[n][100];
    for (int i=0;i<n;i++){
        scanf("%s", arr[i]);
}
 insertionsort(arr,n);
 printarray(arr,n);
 return 0;
}