#include <stdio.h>

int sum (int arr[], int n);
float avg (int arr[], int n);
int max (int arr[], int n);
int min (int arr[], int n);
       
int main(){
    int size;

    printf("Enter size of array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of array : ",size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Sum = %d\n", sum(arr, size));
    printf("Avg = %.2f\n", avg(arr, size));
    printf("Maximum Element = %d\n", max(arr, size));
    printf("Minimum Element = %d\n", min(arr, size));

     return 0;
  
}

int sum (int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

float avg (int arr[], int n ){
       int s = sum(arr, n);

       return (float)s/n;

}

int max (int arr[], int n){
    int maxEle = arr[0];
    for(int i = 1; i<n; i++){
          if(arr[i] > maxEle)
            maxEle = arr[i];
          
    } 
    return maxEle; 
}

int min (int arr[], int n){
    int minEle = arr[0];
    for(int i = 1; i<n; i++){
          if(arr[i] < minEle)
            minEle = arr[i];
          
    } 
    return minEle; 
}

    
