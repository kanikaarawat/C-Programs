#include <stdio.h>
int main(){
    int i, j, temp;
    int start = 0;

    printf("Enter the number of elements you want to enter in the array: ");
    scanf("%d", &i);
    int array[i];
    int end = i - 1;

    printf("Enter the elements: ");
    for (j = 0; j < i; j++) {
        scanf("%d", &array[j]);
    }
    
    // For checking if the array is sorted in ascending order, if not, doing so.
    for (j = 0; j < i - 1; j++) {
        if (array[j] > array[j + 1]) {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
        if (array[j] == array[j + 1]) {
            array[j + 1] = array[j + 2];
            i--;
        }
    }

    printf("The duplicate elements have been removed:\n");
    for (j = 0; j < i; j++) {
        printf("%d\n", array[j]);
    }
    
    return 0;
}
