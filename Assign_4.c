#include <stdio.h>
#include <stdlib.h>

int main()
{
    float velocity;
    int start,end;
    printf("Enter starting temp\n");
    scanf("%d",&start);
    printf("Enter ending temp\n");
    scanf("%d",&end);
    for(start;start<= end;start++){
        velocity= 331.3 + 0.61*start;
        printf("At %d degrees Celesius the velocity of sound is %f\n",start,velocity);
    }
    return 0;
}