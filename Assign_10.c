#include <stdio.h>


void bubble_sort(int size, int *array){

    for (int i = 0; i < size; i++){
        for (int j = 0; j<size-1; j++){
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp; 
            }
        }
    }
}

void main(){
    int array[] = {2,7,1,0,12,-2,5,24};
    printf("Array before sorting: ");
    for (int i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("%d ",array[i]);
    }

    printf("\n");
    bubble_sort(sizeof(array)/sizeof(int), array);

    printf("Array after sorting: ");
    for (int i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("%d ",array[i]);
    }
}