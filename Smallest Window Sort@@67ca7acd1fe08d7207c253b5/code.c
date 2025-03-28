#include <stdio.h>
int findUnsortedSubarray(int arr[],int n){
    int left =0;
    int right =n-1;
    while(left<n-1 && arr[left]<=arr[left+1]){
        left++;
    }
    if(left==n-1){
        return 0;
    }
    while (right>0 && arr[right]>=arr[right-1]){
        right--;
    }
    int minval=arr[left];
    int maxval=arr[left];
    for (int i=left; i<=right; i++){
        if (arr[i]<minval){
            minval=arr[i];
        }
        if (arr[i]>maxval){
            maxval=arr[i];
        }
       
    }
     while (left>0 && arr[left-1]>minval){
            left--;
        }
        while(right<n-1 && arr[right+1]<maxval){
            right++;
        }
    return right-left+1;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        int result=findUnsortedSubarray(arr,n);
        printf("%d\n", result);
    }
    return 0;
}