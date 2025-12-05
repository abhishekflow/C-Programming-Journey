// Program     : Variables and Data Types Demo
// File        : 01-variables-and-datatypes.c
// Author      : Abhishek
// Topic       : Variables, Data Types, Basic Output
// Description : Demonstrates declaration and printing of different data types in C.

#include <stdio.h>

int main()
{
    int age = 21;             // integer variable
    float height = 5.9f;      // floating-point variable
    char grade = 'A';         // character variable
    double salary = 56005.55; // double-precision floating-point variable

    printf("Age     : %d\n", age);
    printf("Height  : %.1f\n", height);
    printf("Grade   : %c\n", grade);
    printf("Salary  : %.2lf\n", salary);

    return 0;
}
