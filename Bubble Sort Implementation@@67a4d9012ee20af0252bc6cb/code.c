#include <stdio.h>
int bubble(int n;int arr){
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);

    }
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr;
    scanf("%d", &arr[n]);
    bubble(int n,int arr);
    return 0;
}