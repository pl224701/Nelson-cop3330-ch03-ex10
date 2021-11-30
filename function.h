/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jack Nelson
*/

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std; 

void function()
{
    std::string operation;
    double number1;
    double number2;
    cout << "Enter the operation: ";
    getline(cin,operation);
    printf("Enter the first operand: ");
    scanf("%lf",&number1);
    printf("Enter the second operand: ");
    scanf("%lf",&number2);
    double result;
    if(operation=="+")
    {
        result = number1+number2;
        printf("The result is %lf",result);
    }
    if(operation=="-")
    {
        result = number1-number2;
        printf("The result is %lf",result);
    }
    if(operation=="*")
    {
        result = number1*number2;
        printf("The result is %lf",result);
    }
    if(operation=="/")
    {
        result = number1/number2;
        printf("The result is %lf",result);
    }
}