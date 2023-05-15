#include <stdio.h>

void printAlternet(int n, int arr[]){
     for (int j = 0; j < n; j += 2) {
        printf("%d ", arr[j]);
    }
    
}


int main() {
    int n, i;
  
    scanf("%d", &n);
    int arr[n];
   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printAlternet(n, arr);
    
    
   
   
    return 0;
}