#include <stdio.h>
void selectionSort(char arr[],int n){
    int minindex;
    char temp;
    for (int i=0;i<n-1;i++){
        minindex=i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
         temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
      
      }
    }
    void printarray(int arr;int size){
        for (int i=1;i<=size;i++){
            printf("%c", arr[i]);
        }
}
    int main(){
        int n;
        scanf("%d", &n);
        char arr[n];
        for (int i=0;i<n;i++){
            scanf(" %c", &arr[i]);
            selectionSort(arr,n);
            printarray(arr,n);
            return 0;
        }
    }