#include <stdio.h>

int main() {
    int i, k, j, M, max, c;
    printf("Enter the number of elements you want to insert in the array:");
    scanf("%d", &i);
    int array[i], count[i];
    
    // Inserting the elements in the array given by the user
    printf("Enter the elements:");
    for (j = 0; j < i; j++) {
        scanf("%d", &array[j]);
    }
    
    // Making a count list to store all counting in the array
    for (j = 0; j < i; j++) {
        count[j] = 0;
        for (k = 0; k < i; k++) {
            if (array[j] == array[k])
                count[j] = count[j] + 1;
        }
    }
    
    // Checking which is the largest element in the count list to check the majority
    k = 0;
    max = count[0];
    for (j = 0; j < i; j++) {
        if (count[j] > max) {
            max = count[j];
            k = j;
        }
    }
    
    // Printing the Majority element and its count
    printf("%d is the majority element and its count is %d\n", array[k], max);
    
    // Another method
    c = max = 0;
    for (j = 0; j < i; j++) {
        c = 0;
        for (k = 0; k < i; k++) {
            if (array[j] == array[k])
                c++;
        }
        if (max < c) {
            max = c;
            M = array[j];
        }
    }
    
    // Printing the Majority element and its count
    printf("%d is the majority element and its count is %d", M, max);
    
    return 0;
}
