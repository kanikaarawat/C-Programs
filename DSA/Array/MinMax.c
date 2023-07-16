#include <stdio.h>
int main(){
    int i,j;
    int min,max;
    printf("Enter the number of elements you want to enter:");
    scanf("%d",&i);
    int array[i];
    //Entering the values
    printf("Enter the values:");
    for (j=0;j<i;j++){
        scanf("%d",&array[j]);
    }
    //For finding min and max values
    min=max=array[0];
    for(j=0;j<i;j++){
        if (array[j]>max)
        max=array[j];
        if (array[j]<min)
        min=array[j];
    }
    printf("%d %d",min,max);
    return 0;
}