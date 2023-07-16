#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void segregateArray(int array[], int size) {
    int low = 0;
    int mid = 0;
    int high = size - 1;

    while (mid <= high) {
        switch (array[mid]) {
            case 0:
                swap(&array[low], &array[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&array[mid], &array[high]);
                high--;
                break;
        }
    }
}

int main() {
    int i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &i);
    int array[i];
    printf("Enter the elements (0s, 1s, and 2s): ");
    for (j = 0; j < i; j++) {
        scanf("%d", &array[j]);
    }

    segregateArray(array, i);

    printf("Segregated array: ");
    for (j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }

    return 0;
}
