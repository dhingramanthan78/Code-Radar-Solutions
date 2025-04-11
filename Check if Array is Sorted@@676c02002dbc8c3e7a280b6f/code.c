#include <stdio.h>
int sorted(int arr[],int size){
    for(int i=0;i<size;i++){
       if(arr[i]<arr[i+1]){
                return 0;
            }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    if(sorted(arr,n)){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}