#include <stdio.h>

void main(){
    char obj; 
    int horizontal_grid_size = 5;
    int vertical_grid_size = 10;
    printf("Enter char to print: ");
    scanf("%c",&obj);
    for (int i = 0; i< vertical_grid_size+1;i++){
        for (int j=0; j<horizontal_grid_size+1;j++){
            if ((i == 0 || i == vertical_grid_size) && (j > 1 && j < horizontal_grid_size)){

                printf("%c",obj);
            }
            else if (i == 1 || i == vertical_grid_size - 1){
                if (j == 1 || j == horizontal_grid_size-1) printf("%c",obj);
                else printf(" ");
            }
            else if ((i > 0 && i < vertical_grid_size) && (j == 0 || j == horizontal_grid_size)){
                if (j != horizontal_grid_size) printf("%c",obj);
                else if (i <= 1 || i == vertical_grid_size-1) printf("%c",obj);

            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
