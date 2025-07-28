//1: Checking if a Number is Positive, Negative, or Zero
//#include <stdio.h>
//int main() {
//    int num;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if (num > 0) {
//        printf("The number is positive.\n");
//    } 
//    else if (num < 0) {
//        printf("The number is negative.\n");
//    } 
//    else {
//        printf("The number is zero.\n");
//    }
//
//    return 0;
//}


//2: Grading System
//#include <stdio.h>
//
//int main() {
//    int marks;
//
//    printf("Enter your marks: ");
//    scanf("%d", &marks);
//
//    if (marks >= 90) {
//        printf("Grade: A\n");
//    } 
//    else if (marks >= 75) {
//        printf("Grade: B\n");
//    } 
//    else if (marks >= 60) {
//        printf("Grade: C\n");
//    } 
//    else if (marks >= 40) {
//        printf("Grade: D\n");
//    } 
//    else {
//        printf("Grade: F (Fail)\n");
//    }
//
//    return 0;
//}

//3: Finding the Largest Among Three Numbers
//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//
//    printf("Enter three numbers: ");
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a > b && a > c) {
//        printf("The largest number is: %d\n", a);
//    } 
//    else if (b > a && b > c) {
//        printf("The largest number is: %d\n", b);
//    } 
//    else {
//        printf("The largest number is: %d\n", c);
//    }
//
//    return 0;
//}


// 4: Checking Leap Year

//#include <stdio.h>
//
//int main() {
//    int year;
//
//    printf("Enter a year: ");
//    scanf("%d", &year);
//
//    if (year % 400 == 0) {
//        printf("%d is a leap year.\n", year);
//    } 
//    else if (year % 100 == 0) {
//        printf("%d is not a leap year.\n", year);
//    } 
//    else if (year % 4 == 0) {
//        printf("%d is a leap year.\n", year);
//    } 
//    else {
//        printf("%d is not a leap year.\n", year);
//    }
//
//    return 0;
//}

//5: Simple Calculator
#include <stdio.h>

int main() {
    char op;
    int num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (op == '+') {
        printf("Result: %d\n", num1 + num2);
    } 
    else if (op == '-') {
        printf("Result: %d\n", num1 - num2);
    } 
    else if (op == '*') {
        printf("Result: %d\n", num1 * num2);
    } 
    else if (op == '/') {
         printf("Result: %d\n", num1 / num2);
    }      
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}



