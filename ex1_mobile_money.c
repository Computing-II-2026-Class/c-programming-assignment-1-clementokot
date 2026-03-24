/* Name: OKOT CLEMENT */
/* Student Number: 25/U/BIE/05306/PE */

#include <stdio.h>
int main(){
    float amount, fee ;
    printf("enter the amount to be sent:");
    scanf("%f", &amount);

    if (amount <= 100){
        fee = 0.05 * amount;
        printf("the fee is: %f\n", fee);
    }
        else if (amount<= 2500){
            fee = 0.04 * amount;
            printf("the fee is: %f\n", fee);
        }
        else if (amount <= 10000){
            fee = 0.03 * amount;
            printf("the fee is: %f\n", fee);
        }
        else if (amount <= 30000){ 
            fee = 0.02 * amount;
            printf("the fee is: %f\n", fee);
        }
        else if (amount > 60000){
            fee = 0.01 * amount;
            printf("the fee is: %f\n", fee);
        }
    return 0;
}
