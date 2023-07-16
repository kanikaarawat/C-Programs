#include <stdio.h>
int main(){
    int i, j,k, count;
    printf("Enter the number of elements yoou want to input:");
    scanf("%d",&i);
    int array[i];
    printf("Enter the elements:");
    //Printing the elements
    for (j=0;j<i;j++){
        scanf("%d",&array[j]);
    }
    //Finding the first non repeating element in the array
    count=0;
    for (j=0;j<i;j++){
        for (k=0;k<i;k++){
            if (j!=k && array[j]==array[k])
            count++;
        }
        if (count==0){
        k=j;
        break;}count=0;
    }
    printf("%d is the first non repeating element in the array.",array[k]);
    return 0;   
    }