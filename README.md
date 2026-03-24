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

### Task

Write a program that asks the user to enter:

- amount to send  
- transaction fee (%)  

The program should calculate and display:

- fee amount  
- total amount deducted  

### Example

    Enter amount to send: 10000
    Enter transaction fee (%): 1.5

    Transaction fee: 150.00 UGX
    Total deducted: 10150.00 UGX

---

## Exercise 2: Fuel Efficiency Calculator

### Task

Write a program that asks the user to enter:

- distance travelled (km)  
- fuel used (litres)  

The program should calculate and display:

- fuel efficiency (km/litre)  

### Example

    Enter distance (km): 300
    Enter fuel used (litres): 20

    Fuel efficiency: 15.00 km/l

---

## Exercise 3: Electricity Bill Calculator

### Task

Write a program that asks the user to enter:

- units consumed  
- cost per unit  

The program should calculate and display:

- total electricity bill  

### Example

    Enter units consumed: 120
    Enter cost per unit: 750

    Total bill: 90000.00 UGX

---

## Requirements

- Use `scanf()` for input  
- Use `printf()` for output  
- Use appropriate variable types (`int`, `float`)  
- Display decimal values using `%.2f`  
- Include units where appropriate  
- Use meaningful variable names  
- Do not change file names  

---

## Bonus (Optional)

Format your output like a report or receipt.

### Example

    ----- TRANSACTION SUMMARY -----
    Amount Sent: 10000.00 UGX
    Fee: 150.00 UGX
    Total Deducted: 10150.00 UGX
    -------------------------------

---

## Marking Guide

| Item | Marks |
|------|-------|
| Mobile Money Program | 30 |
| Fuel Program | 25 |
| Electricity Program | 30 |
| Header Comment (All Files) | 15 |

Total: 100 Marks

---

## Submission

Push your work to your GitHub Classroom repository:

    git add .
    git commit -m "Completed assignment 1"
    git push

---

## Important Notes

- Programs must compile and run without errors  
- Include your name and student number in every file  
- Missing header comments will reduce marks  
- Ensure inputs are read correctly using `scanf()`  
