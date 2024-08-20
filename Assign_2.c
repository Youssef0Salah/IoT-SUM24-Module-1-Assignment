#include <stdio.h>
#include <stdlib.h>

int main()
{

    float time, product, distance, acceleration = 32.0;

    // Tell user to enter the time
    printf("Enter the time in seconds: ");
    scanf("%f", &time);

    // Calculate
    product = (acceleration * time * time);
    distance = product / 2;

    // Output
    printf("The object will drop %.2f feet in %.2f seconds.\n", distance, time);


    return 0;
}