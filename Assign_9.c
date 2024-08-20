#include <stdio.h>
#include "math.h"
float calculateArea(float i) {
    double radius = i / 2;
    return M_PI * radius * radius;
}
float calculatePricePerSquaredInch(float i, float p) {
    return p / calculateArea(i);
}
int main(void) {
    float i1, i2, p1, p2;
    float smaller_pizza_price_per_squared_inch, larger_pizza_price_per_squared_inch;
    printf("Enter the smaller pizza's diameter in inches\n");
    scanf("%f", &i1);
    printf("Enter the larger pizza's diameter in inches\n");
    scanf("%f", &i2);
    printf("Enter the smaller pizza's price\n");
    scanf("%f", &p1);
    printf("Enter the larger pizza's price\n");
    scanf("%f", &p2);
    smaller_pizza_price_per_squared_inch = calculatePricePerSquaredInch(i1, p1);
    larger_pizza_price_per_squared_inch = calculatePricePerSquaredInch(i2, p2);
    if (smaller_pizza_price_per_squared_inch < larger_pizza_price_per_squared_inch) {
        printf("Smaller pizza is the best buy\n");
    } else if (larger_pizza_price_per_squared_inch < smaller_pizza_price_per_squared_inch) {
        printf("Larger pizza is the best buy\n");
    } else {
        if (i1 < i2) {
            printf("Smaller pizza is the best buy\n");
        } else {
            printf("The 2 pizzas are identical\n");
        }
    }
    return 0;
}
