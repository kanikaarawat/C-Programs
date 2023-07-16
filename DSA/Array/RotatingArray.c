#include <stdio.h>
int main(){
    int i, j, k, r,position,temp;
    printf("Enter the number of elements you want to insert in the Array:-");
    scanf("%d",&i);
    int array[i];
    printf("Enter the elements:");
    //Inserting the elements into the array
    for (j = 0; j < i; j++) {
        scanf("%d", &array[j]);
    }    
    printf("Enter the desired number of rotations you need for the array:-");
    scanf("%d",&position);
    //Rotating the array
    for(k=0;k<position;k++){
        for(j=0;j<i;j++){
            if(j==i-1){
            temp=array[j];
            for (r=i-2;r>=0;r--){
                array[r+1]=array[r];
            }array[0]=temp;
            }
        }
    }//Printing the Array
    for(j=0;j<i;j++){
        printf("%d \t",array[j]);
    }printf("\n");

    return 0;
}