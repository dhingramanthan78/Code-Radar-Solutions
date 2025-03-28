#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minindex;
    
    for (i = 0; i < n - 1; i++) {  // Loop from 0 to n-1
        minindex = i;
        
        for (j = i + 1; j < n; j++) {  // Compare with remaining elements
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        
        // Swap if minindex is different from i
        if (minindex != i) {
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
}

void printarray(int arr[], int size) {  // Correct parameter type
    for (int i = 0; i < size; i++) {    // Correct loop range
        printf("%d ", arr[i]);  // Remove '&' to print values
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];  // Declare array
    
    for (int i = 0; i < n; i++) {  // Use correct 0-based index
        scanf("%d", &arr[i]);
    }
    
    selectionSort(arr, n);
    printarray(arr, n);
    
    return 0;
}
