#include <stdio.h>

int main() {
    int i, j, temp;
    printf("Enter the number of elements you want to insert:");
    scanf("%d", &i);
    int array[i];
    // Entering the values
    printf("Enter the values:");
    for (j = 0; j < i; j++) {
        scanf("%d", &array[j]);
    }
    // For checking if the array is sorted in ascending order, if not, doing so.
    for (j = 0; j < i - 1; j++) {
        if (array[j] > array[j + 1]) {
            temp = array[j];
            array[j] = array[j + 1];   // Problem if the updated elements in array are smaller than the upcoming  elements in array, they are not sorted.
            array[j + 1] = temp;
        }
    }
    // Printing the sorted array
    printf("Sorted array: ");
    for (j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }

    return 0;
}
