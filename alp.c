#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int arr[n];

    
    for(int i=0;i<n;i++){
        int item;
        scanf("%d",&item);
        arr[i] = item;
    }
    
    for(int j=0;j<n;j++){

            if(j%2 ==0){

            printf("%d ",arr[j]);
            }
        
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}