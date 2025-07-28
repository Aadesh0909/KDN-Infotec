//1)

//#include<stdio.h>
//void sum();																									
//void main(){
//	printf("\nGoing to calculate the sum of two numbers: ");
//	sum();
//}
//void sum(){
//	int a , b;
//	printf("\nEnter two numbers :");
//	scanf("%d %d", &a, &b);
//	printf("the sum is %d : ",a+b);
//	
//}

//2)

//#include<stdio.h>
//void printName();																									
//void main(){
//	printf("Hello ");
//	printName();
//}
//void printName(){
//	
//	printf("Aadesh");
//
//}


//3)
//#include<stdio.h>
//int sum();																									
//void main(){
//	printf("\nGoing to calculate the sum of two numbers: ");
//	int result=sum();
//	printf("\n%d",result);
//}
//int sum(){
//	int a , b;
//	printf("\nEnter two numbers :");
//	scanf("%d %d", &a, &b);
//	return a+b;
//	
//}

//4)
//#include<stdio.h>
//int sub();																									
//void main(){
//	printf("\nGoing to calculate the sub of two numbers: ");
//	int result=sub();
//	printf("\n%d",result);
//}
//int sun(){
//	int a , b;
//	printf("\nEnter two numbers :");
//	scanf("%d %d", &a, &b);
//	return a-b;
//	
//}

//5)

//#include<stdio.h>
//int sub();																									
//void main(){
//	printf("\nGoing to calculate the sub of two numbers: ");
//	int result=sub();
//	printf("\n%d",result);
//}
//int sub(){
//	int a , b;
//	printf("\nEnter two numbers :");
//	scanf("%d %d", &a, &b);
//	return a-b;
//	
//}

//6)
//#include<stdio.h>
//int  num();																									
//void main(){
//	printf("\nPrint Givan  numbers: ");
//	int result=num();
//	printf("\n%d",result);
//}
//int num(){
//	int a;
//	printf("\nEnter any numbers :");
//	scanf("%d", &a);
//	return a;
//	
//}

//7)
//#include<stdio.h>
//int  print();																									
//void main(){
//	printf("\nPrint Givan  numbers: ");
//	char result=print();
//	printf("\n%c",result);
//}
//int print(){
//	int a;
//	printf("\nEnter any character :");
//	scanf("%c", &a);
//	return a;
//	
//}

//8)
//#include<stdio.h>
//int div();																									
//void main(){
//	printf("\nGoing to calculate the div of two numbers: ");
//	int result=div();
//	printf("\n%d",result);
//}
//int div(){
//	int a , b;
//	printf("\nEnter two numbers :");
//	scanf("%d %d", &a, &b);
//	return a/b;
//	
//}

//without Argument with return
//WAP to calculate area of square 
////9)
//#include<stdio.h>
//int area();
//void main(){
//	float result = area();
//	printf("Area of square is : %f",result);
//}
//int area(){
//	float s;
//	printf("Enter the side of square : ");
//	scanf("%f",&s);
//	return s*s;
//}



//with Argument without return
//1)
//#include<stdio.h>
//void sum(int, int);
//void+ main(){
//	int a, b, result;
//	printf("\nGoing to calculate sum of two numbers ");
//	printf("\nEnter two numbers : ");
//	scanf("%d%d",&a, &b);
//	sum(a, b);
//	
//}
//void sum(int x, int y){
//	printf("Sum of two numbers : %d", x+y);
//}

//2)
//#include<stdio.h>
//void average(int, int, int, int, int);
//void main(){
//	int a, b, c, d, e;
//	printf("\nGoing to calculate Average of five numbers ");
//	printf("\nEnter five numbers : ");
//	scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
//	average(a, b, c, d, e);
//	
//}
//void average(int a, int b, int c, int d, int e){
//	float avg =(a+b+c+d+e)/5;
//	printf("Sum of two numbers : %f", avg);
//}

//with Argument with return

//1)
//#include<stdio.h>
//int sum(int, int);
//void main(){
//	int a, b, result;
//	printf("\nGoing to calculate sum of two numbers ");
//	printf("\nEnter two numbers : ");
//	scanf("%d%d",&a, &b);
//	result = sum(a, b);
//	printf("Sum of two numbers : %d", result);
//	
//}
//int sum(int x, int y){
//	return x+ y;
//}

//#include<stdio.h>
//int even_odd(int);
//void main(){
//	int a, flag;
//	printf("\nGoing to calculate Even and Odd numbers ");
//	printf("\nEnter the numbers : ");
//	scanf("%d",&a);
//	flag = even_odd(a);
//	if(flag == 0){
//		printf("\nthe number is odd");
//	}
//	else
//	{
//		printf("\nthe number is Even");
//	}
//	
//}
//int even_odd(int x){
//	if( x % 2 == 0 ){
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}



//////////////////////////////////////////////


//--------------------------------------------------------------- 1

/*#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    greet("Omkar");
}
*/

//---------------------------------------------------------------2 

/*#include <stdio.h>

void square(int num) {
    printf("Square of %d is %d\n", num, num * num);
}

int main() {
    square(4);
}
*/


//--------------------------------------------------------------- 3

/*#include <stdio.h>

void areaRectangle(float length, float width) {
    printf("Area = %.2f\n", length * width);
}

int main() {
	float length , width;
	printf("\nEnter the number : ");
	scanf("%f %f",&length,&width);
    areaRectangle(length,width);
}
*/

//---------------------------------------------------------------- 4

/*#include <stdio.h>

void findMax(int a, int b) {
    if (a > b)
        printf("%d is greater\n", a);
    else
        printf("%d is greater\n", b);
}

int main() {
	int x,y;
	printf("\nEnter the number : ");
	scanf("%d %d",&x,&y);
    findMax(x, y);
}
*/

//------------------------------------------------------------------- 5 

/*#include <stdio.h>

void LeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);
}

int main() {
	int year;
	printf("\nEnter the Year : ");
	scanf("%d",&year);
    LeapYear(year);
}
*/


///////////////////////////////////////////////////////////


//---------------------------------------------------------- 1

/*#include <stdio.h>
int multiply(int x, int y) {
    return x * y;
}

int main() {
    int product = multiply(4, 6);
    printf("Product = %d\n", product);
    return 0;
}
*/

//2) 

/*#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
	int a, b;
    int m = max(a , b);
    printf("Enter the Two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Maximum = %d\n", m);
    return 0;
}
*/

//3)

/*#include <stdio.h>
char getGrade(int marks) {
    if (marks >= 90)
	 return 'A';
    if (marks >= 75)
	 return 'B';
    if (marks >= 60)
	 return 'C';
    return 'F';
}

int main() {
    char grade = getGrade(83);
    printf("Grade = %c\n", grade);
    return 0;
}
*/

//4) 

/*#include <stdio.h>
float areaRectangle(float length, float width){
    return length * width;
}

int main() {
	float length , width;
	printf("Enter the values : ");
	scanf("%f %f", &length, &width);
    float area = areaRectangle(length , width);
    printf("Area = %.2f\n", area);
    return 0;
}
*/

// 5 )

//#include <stdio.h>
//
//int sumOfDigits(int num) {
//    int sum = 0;
//    while (num != 0) {
//        sum += num % 10;
//        num /= 10;
//    }
//    return sum;
//}
//
//int main() {
//	int num;
//	printf("Enter the number : ");
//	scanf("%d", &num);
//    printf("Sum of digits = %d\n", sumOfDigits(num));
//    return 0;
//}
