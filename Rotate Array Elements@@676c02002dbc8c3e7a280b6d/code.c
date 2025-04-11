#include <stdio.h>
void reverse_array(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotate_array(int arr[],int n,int k){
    k=k%n;
    reverse_array(arr,0,n-1);
    reverse_array(arr,0,k-1);
    reverse_array(arr,k,n-1);
}
int main(){
    int n,int k;
    int arr[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    
    scanf("%d",&k);
    rotate_array(arr[n],n,k);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
return 0;
}