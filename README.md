[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/yoLd-IGs)
# C Programming Assignment 1

## Topic: Input, Output and Basic Calculations

## Objective

This assignment is designed to help you practice:

- variables  
- input using `scanf()`  
- output using `printf()`  
- arithmetic calculations  
- writing complete C programs  

---

## Files to Complete

- `ex1_mobile_money.c`  
- `ex2_fuel.c`  
- `ex3_electricity.c`  

---

## Required Header Comment

Each file must begin with a comment containing your details:

    /* Name: Your Full Name */
    /* Student Number: Your Registration Number */

---

## Exercise 1: Mobile Money Fee Calculator

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


## Exercise 2: Fuel Efficiency Calculator

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


## Exercise 3: Electricity Bill Calculator

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


orrectly using `scanf()`  
