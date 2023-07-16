#include<stdio.h>
int main(){
    int i, j,k, target;
    printf("Enter the number of elements in the array:");
    scanf("%d",&i);
    int array[i];
    printf("Enter the elements:");
    //Inserting the elements into array
    for(j=0;j<i;j++){
        scanf("%d",&array[j]);
    }
    printf("Enter the desired target sum:");
    scanf("%d",&target);
    //Comparing Pairs of elements whose sum is equal to the given desired target
    for (j=0;j<i;j++){
        for (k=0;k<i;k++){// Start from j + 1 to avoid same pairs
            if(array[j]+array[k]==target)
            printf("%d and %d sum gives the desired target of %d\n",array[j],array[k],target);
                }
    }
    return 0;
}