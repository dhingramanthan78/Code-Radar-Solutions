#include <stdio.h>
int sorted(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if(arr[i]<arr[j]){
                return 0;
            }el

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