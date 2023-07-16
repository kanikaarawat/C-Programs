#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    int first;
    int second;
} Pair;

int main() {
    int i, j, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &i);
    int array[i];
    printf("Enter the elements: ");
    //Inserting the elements in the Array
    for (j = 0; j < i; j++) {
        scanf("%d", &array[j]);
    }
    printf("Enter the desired target sum: ");
    scanf("%d", &target);

    Pair pairs[MAX_SIZE];
    int pairCount = 0;

    // Comparing pairs of elements whose sum is equal to the desired target
    for (j = 0; j < i; j++) {
        for (int k = j + 1; k < i; k++) {
            if (array[j] + array[k] == target) {
                // Check if the pair already exists in the set
                int exists = 0;
                for (int p = 0; p < pairCount; p++) {
                    if ((pairs[p].first == array[j] && pairs[p].second == array[k]) ||
                        (pairs[p].first == array[k] && pairs[p].second == array[j])) {
                        exists = 1;
                        break;
                    }
                }

                // If the pair doesn't exist, add it to the set and print
                if (!exists) {
                    Pair newPair;
                    newPair.first = array[j];
                    newPair.second = array[k];
                    pairs[pairCount] = newPair;
                    pairCount++;
                    printf("%d and %d sum give the desired target of %d\n", array[j], array[k], target);
                }
            }
        }
    }

    return 0;
}
