#include <stdio.h>
float calculate_interest(float balance) {
    float interest = 0;
    if (balance <= 1000) {
        interest = balance * 0.015;
    } else {
        interest = 1000 * 0.015 + (balance - 1000) * 0.01;
    }
    return interest;
}
float calculate_minimum_payment(float total_due) {
    float minimum_payment = 0;
    if (total_due <= 10) {
        minimum_payment = total_due;
    } else {
        if ((total_due * 0.01) < 10) {
            minimum_payment = 10;
        } else {
            minimum_payment = total_due * 0.01;
        }
    }
    return minimum_payment;
}
int main(void) {
    float balance, interest, total_due, minimum_payment;
    int option;
    do {
        printf("Enter account balance:\n");
        scanf("%f", &balance);
        printf("Balance is: %.2f\n", balance);
        interest = calculate_interest(balance);
        printf("Interest is: %.2f\n", interest);
        total_due = balance + interest;
        printf("Total due is: %.2f\n", total_due);
        minimum_payment = calculate_minimum_payment(total_due);
        printf("Minimum payment is: %.2f\n", minimum_payment);
        printf("Choose one of the following options:\n");
        for (int i = 0;; ++i) {
            if (i > 0) {
                printf("Wrong input, Please try again\n");
            }
            printf("1- Calculate again\n");
            printf("2- Exit the program\n");
            scanf("%d", &option);
            if ((option == 1) || (option == 2)) {
                break;
            }
        }
    } while (option == 1);
    return 0;
}
