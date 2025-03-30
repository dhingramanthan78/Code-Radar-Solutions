#include <stdio.h>
void binarysearch(int arr[],int n,int search){
    int first,middle,last;
    first=0;
    last=n-1;
    while(first<=last){
        middle=(first+last)/2;
        if(arr[middle]<search){
            first=middle+1;
        }
        else if(arr[middle]==search){
            return middle;
            break;
        }
        else{
            last=middle-1;
        }
    }
     return -1;
    }
int main(){
    int n, target;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d",&target);
    int result=binarysearch(arr,n,target);
    printf("%d\n", result);
    return 0;
}