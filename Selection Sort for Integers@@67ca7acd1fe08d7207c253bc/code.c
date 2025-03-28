#include <stdio.h>
int selectionSort(int arr[],int n){
    int i,j,minindex;
    for (int i=1;i<=n;i++){
        minindex=i;
    }
    for (int j=i+1;j<=n;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;
        }
    }
    if(minindex!=i){
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
}
void printarray(int arr,int size){
    for (int i=1;i<=size;i++){
        printf("%d", &arr[i]);
    }
    printf("\n");
}
    
    int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }
    selectionSort(arr ,n);
    printarray(arr ,n);
    return 0;
}