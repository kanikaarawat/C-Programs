//Consider an array A of size n, which contains the element from 0 to n-1. You need to find all the elements present more than once in the given array and return the answer in ascending order.
//Calculate the time complexity and space complexity
/* Algorithm:-
  1. Store elements in the array.
  2. k=0
    for(i=0;i<n;i++){
        count=0
        for(j=0;j<n;j++){
            if (i!=0) && (A[i]==A[j])
            count++;
        }
        if (count!=0){
        A2[k]=count;
        k++;}
    for(i=0;i<n;i++){
        swap(i,i++)
    }
    int swap(a,b){                              Time Complexity=O(n^2)
        if(A[a]<A[b])                           Space Complexity=0(n)
        temp=A[a]
        A[a]=A[b]
        A[b]=temp
    }
  }
*/

#include <stdio.h>

void swap(int *a, int *b) {
    if (*a >*b){
    int temp = *a;
    *a = *b;
    *b = temp;}
}

int main() {
    int i, j, k, n, count;
    printf("Enter the number of array:");
    scanf("%d", &n);
    int A[n];
    int A2[n];

    // Entering the elements for the array
    printf("Enter the elements:");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Comparing the elements for finding the duplicate elements
    k = 0;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (A[i] == A[j])
                count++;
        }
        if (count != 1) {
            A2[k] = count;
            k++;
        }
    }

    // Changing the array by swap
    for (i = 0; i < n - 1; i++) {
        swap(&A[i], &A[i + 1]);
    }

    // Descending order of count
    printf("Updated Array after swapping:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", A2[i]);
    }

    return 0;
}
