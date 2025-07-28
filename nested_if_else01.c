
//1. Weather Alerts

//#include <stdio.h>
//int main() {
//    int temperature = 32, rain = 1; // 1 means raining, 0 means not raining
//    if (temperature < 35) {
//        if (rain) {
//            printf("Cool and Rainy Weather.\n");
//        } else {
//            printf("Cool Weather.\n");
//        }
//    } else {
//        if (rain) {
//            printf("Hot and Rainy Weather.\n");
//        } else {
//            printf("Hot Weather.\n");
//        }
//    }
//    return 0;
//}


//2.  Student Passes Multiple Subjects

//#include <stdio.h>
//int main() {
//    int math = 40, science = 50, english = 35;
//    if (math >= 35) {
//        if (science >= 35) {
//            if (english >= 35) {
//                printf("Student passes all subjects.\n");
//            } else {
//                printf("Fails in English.\n");
//            }
//        } else {
//            printf("Fails in Science.\n");
//        }
//    } else {
//        printf("Fails in Math.\n");
//    }
//    return 0;
//}


// 3. Character Type

/*#include <stdio.h>
int main() {
    char ch = 'A';
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("Uppercase Letter.\n");
        } else {
            printf("Lowercase Letter.\n");
        }
    } else {
        printf("Not an Alphabet Character.\n");
    }
    return 0;
}
*/

//4.Leap Year

/*#include <stdio.h>
int main() {
    int year = 2024;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Leap Year.\n");
            } else {
                printf("Not a Leap Year.\n");
            }
        } else {
            printf("Leap Year.\n");
        }
    } else {
        printf("Not a Leap Year.\n");
    }
    return 0;
}
*/

//5. Odd or Even Number

/*#include <stdio.h>
int main() {
    int num = 6;
    if (num % 2 == 0) {
        if (num > 0) {
            printf("Even and Positive.\n");
        } else {
            printf("Even and Non-Positive.\n");
        }
    } else {
        printf("Odd Number.\n");
    }
    return 0;
}
*/

//6. Triangle Type Based on Angles

/*#include <stdio.h>
int main() {
    int angle1 = 60, angle2 = 60, angle3 = 60;
    if (angle1 + angle2 + angle3 == 180) {
        if (angle1 == angle2 && angle2 == angle3) {
            printf("Equilateral Triangle.\n");
        } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
            printf("Isosceles Triangle.\n");
        } else {
            printf("Scalene Triangle.\n");
        }
    } else {
        printf("Not a triangle.\n");
    }
    return 0;
}
*/

//7. Grading System

/*#include <stdio.h>
int main() {
    int marks = 75;
    if (marks >= 50) {
        if (marks >= 85) {
            printf("Grade: A\n");
        } else {
            printf("Grade: B\n");
        }
    } else {
        printf("Grade: F\n");
    }
    return 0;
}
*/

//8. Positive, Negative, or Zero

/*#include <stdio.h>
int main() {
    int num = -5;
    if (num >= 0) {
        if (num == 0) {
            printf("Number is zero.\n");
        } else {
            printf("Number is positive.\n");
        }
    } else {
        printf("Number is negative.\n");
    }
    return 0;
}
*/

//9. largest among 3 number

/*#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 7;
    if (a > b) {
        if (a > c) {
            printf("Largest is a: %d\n", a);
        } else {
            printf("Largest is c: %d\n", c);
        }
    } else {
        if (b > c) {
            printf("Largest is b: %d\n", b);
        } else {
            printf("Largest is c: %d\n", c);
        }
    }
    return 0;
}
*/

//10. Age check

/*#include <stdio.h>
int main() {
    int age = 98;
    if (age >= 18) {
        if (age <= 40) {
            printf("You are eligible.\n");
        } else {
            printf("Age exceeds the limit.\n");
        }
    } else {
        printf("You are too young.\n");
    }
    return 0;
}
*/
