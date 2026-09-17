//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main()
{
    float newtemp,temp=0.00;
    printf("Enter the temprature in celcsius");
    scanf("%f",&temp);
    newtemp = (temp*1.8)+32;
    printf("Fahrenheit=%.2f",newtemp);
    return 0;
}