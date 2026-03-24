/* Name: OKOT CLEMENT */
/* Student Number: 25/U/BIE/05306/PE */

#include <stdio.h>
int main(){
    float distance, fuel_efficiency, fuel_used;
    printf("Enter the distance to be traveled (in kilometers): ");
    scanf("%f", &distance);
    printf("Enter the fuel used of the vehicle (in liters): ");
    scanf("%f", &fuel_used);
    fuel_efficiency = distance / fuel_used;
    printf("The amount of fuel efficiency is: %f km/l\n", fuel_efficiency);
    return 0;
}
