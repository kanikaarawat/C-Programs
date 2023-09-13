//Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
#include <stdio.h>
int main(){
    int i, n, Search;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements:");
    //Enter the elements
    for (i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("The element you need to search:");
    scanf("%d",&Search);
    for (i=0;i<n;i++){
        if (Search==A[i])
        printf("The number is matched at:%d", i);
    }

    return 0;
}
