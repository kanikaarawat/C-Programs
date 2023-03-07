//Program to find sum of elements in a given array
#include<stdio.h>
int main(){
    int n,i=0,sum=0;
    printf("Enter the number of elements you want to insert in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The sum of elements:%d",sum);
    return 0;
}
