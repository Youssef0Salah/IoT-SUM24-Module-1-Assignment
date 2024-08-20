#include <stdio.h>

#define liter_to_gallon 0.264179

double calculate_miles_per_gallon(double liters_consumed, double miles_travelled){
    double gallons_consumed = liters_consumed / liter_to_gallon;

    return miles_travelled / gallons_consumed;
}

void main(){
    int option;
    while (1==1)
    {
        printf("Start calculation (1)\nQuit (0)\n");
        scanf("%d",&option);

        if (option == 0) exit(0);

        double liters_consumed;
        double miles_travelled;
        printf("Enter amount of gas consumed in liters: ");
        scanf("%lf",&liters_consumed);
        printf("Enter distance traveled in miles: ");
        scanf("%lf",&miles_travelled);
        printf("The consumption rate is : %0.3f miles/gallon\n", calculate_miles_per_gallon(liters_consumed,miles_travelled));
    }

}
