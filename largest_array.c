//Program to find largest element in an array
#include<stdio.h>
int main(){
    int n,i=0,high=0;
    printf("Enter the number of elements you want to insert in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (high>arr[i])
           continue;
        else
           high=arr[i];
    }
    printf("The highest element in an array::%d",high);
    return 0;
}
