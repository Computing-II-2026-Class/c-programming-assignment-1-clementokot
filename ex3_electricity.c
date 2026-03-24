/* OKOT CLEMENT */
/* Student Number: 25/U/BIE/05306/PE */

#include <stdio.h>
int main(){
    float units, bill_amount, cost_per_unit;
    printf("enter the number of units consumed:");
    scanf("%f", &units);
    printf("enter the cost per unit:");
    scanf("%f", &cost_per_unit);

    if (units <= 100){
        bill_amount = 0.5 * units * cost_per_unit;
        printf("the bill amount is: %f\n", bill_amount);

    }

    else if (units > 100 && units <= 200){
        bill_amount = 0.75 * units * cost_per_unit;
        printf("the bill amount is: %f\n", bill_amount);
    }

    else if (units > 200 && units <= 300){
        bill_amount = 1.20 * units * cost_per_unit;
        printf("the bill amount is: %f\n", bill_amount);

    }

    else if (units > 300){
        bill_amount = 1.50 * units *cost_per_unit;
        printf("the bill amount is: %f\n", bill_amount);
    }
    return 0;
        
    }
