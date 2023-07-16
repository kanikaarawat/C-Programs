#include <stdio.h>

int main() {
    int i, j;
    int start = 0;

    printf("Enter the number of elements you want to enter in the array: ");
    scanf("%d", &i);
    int Array[i];
    int end = i - 1;

    printf("Enter the elements: ");
    for (j = 0; j < i; j++) {
        scanf("%d", &Array[j]);
    }

    // Reversing the Array by swapping the places
    while (start < end) {
        int temp = Array[start];
        Array[start] = Array[end];
        Array[end] = temp;
        start++;
        end--;
    }

    printf("Reversed Array: ");
    for (j = 0; j < i; j++) {
        printf("%d ", Array[j]);
    }
    printf("\n");

    return 0;
}
