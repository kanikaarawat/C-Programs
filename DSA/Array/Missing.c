#include <stdio.h>
int main(){
    int i,j;
    printf("Enter the number of elements you want to insert into the array:");
    scanf("%d",&i);
    int array[i];
    //Inserting elements into the array
    printf("Enter the consecutive elements:");
    for (j=0;j<i;j++){
        scanf("%d",&array[j]);
    }
    //Checking the missing elements from consecutive integers
    for (j=0;j<i-1;j++){
        if (array[j]+1!=array[j+1])
        printf("%d is missing",array[j]+1);
    }
    return 0;
}