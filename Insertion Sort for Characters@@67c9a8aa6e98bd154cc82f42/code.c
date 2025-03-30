#include <stdio.h>
void insertionsort(char arr[],int n){
    for (int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void printarray(char arr[],int n){
    for (int i=0;i<n;i++){
        printf("%c ", arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    char arr[n];
    for (int i=0;i<n;i++){
        scanf(" %c", &arr[i]);
    }
    insertionsort(arr,n);
    printarray(arr,n);
    return 0;
}