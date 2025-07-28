//01
//#include<stdio.h>
//int main(){
//	int num = 0;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//	
//	if( num > 0){
//		printf("The number is Positive");
//	}
//	else if(num < 0){
//		printf("Number is Negative");
//	}
//	else{
//		printf("The number is zero");
//	}
//	return 0;
//}


//02
//#include<stdio.h>
//int main(){
//	int num = 0;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//	
//	if (num % 2 == 0){
//		printf("The number is Even number");
//	}
//	else{
//		printf("The number is Odd number");
//	}
//	return 0;
//}


//03
//#include<stdio.h>
//int main(){
//	int num1 = 0, num2 = 0;
//	printf("Enter first number : ");
//	scanf("%d",&num1);
//	
//	printf("Enter Second number : ");
//	scanf("%d",&num2);
//	
//	if (num1 > num2){
//		printf("First number is greater than the Second");
//	}
//	else{
//		printf("Second number is greater than the first");
//	}
//	
//	
//	return 0;
//}
  

//04
//#include<stdio.h>
//int main(){
//	int age = 0;
//	printf("Enter your Age : ");
//	scanf("%d",&age);
//	
//	
//	
//	if (age >= 18){
//		printf("you are eligible for the vote");
//	}
//	else{
//		printf("you are not eligible for the vote");
//	}
//	
//	
//	return 0;
//}


//05
//#include<stdio.h>
//int main(){
//	int num = 0;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//	
//	
//	
//	if (num % 5 == 0 && num % 11 == 0){
//		printf("The number is divisible by 5 and 11");
//	}
//	else{
//		printf("The number is not divisible by 5 and 11");
//	}
//	
//	return 0;
//}


//06
//#include<stdio.h>
//int main(){
//	int year = 0;
//	printf("Enter a year : ");
//	scanf("%d",&year);
//	
//	if (year % 4 == 0){
//		printf("the year is leap year");
//	}
//	else{
//		printf("The year is not an leap year");
//	}
//	
//	return 0;
//}


//07
//#include<stdio.h>
//int main(){
//	char character = 0;
//	printf("Enter a character : ");
//	scanf("%c",&character);
//	
//	if (character == 'a' || character == 'e' || character == 'i' || character=='o' || character =='u' ||
//	character == 'A' || character == 'E' || character == 'I' || character=='O' || character =='U' ){
//		printf("given character is vowel");
//	}
//	else{
//		printf("given character is consonant");
//	}
//	
//	return 0;
//}


//08
//#include<stdio.h>
//int main(){
//	int num = 0;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//	
//	if(num >= 100 && num <= 999){
//		printf("The number is three digit");
//	}
//	else{
//		printf("The number is not Three digit");
//	}
//	
//	return 0;
//}


//09
//#include<stdio.h>
//int main(){
//	int num1 = 100, num2 = 150 , num3 = 90;
//	
//	if (num1 > num2 && num1 > num3){
//		printf("%d is the greatest number", num1);
//	}
//	else if (num2 > num3 && num2 > num3){
//		printf("%d is the greatest number", num2);
//	}
//	else{
//		printf("%d is the greatest number", num3);
//	}
//	return 0;
//}

//10
//#include<stdio.h>
//int main(){
//	int angle = 0;
//	printf("Enter a angle :");
//	scanf("%d",&angle);
//	
//	if (angle < 90){
//		printf("The triangle is Acute Angle triangle");
//	}
//	else if (angle > 90){
//		printf("The triangle is obtuse Angle triangle");
//	}
//	else{
//		printf("The triangle is Right Angle triangle");
//	}
//	return 0;
//}

//11
//#include<stdio.h>
//int main(){
//	char ch ;
//	printf("Enter a character : ");
//	scanf("%c",&ch);
//	
//	if(ch > 'A' && ch < 'Z'){
//		printf("The given character is Uppercase");
//	}
//	else if(ch > 'a' && ch < 'z'){
//		printf("The given character is Lowercase");
//	}
//	else if(ch > '0' && ch < '9'){
//		printf("The given character is Digit");
//	}
//	else{
//		printf("The given character is special symbol");
//	}
//	
//	return 0;
//}


//12
#include<stdio.h>
int main(){
	int marks = 0;
	printf("Enter Your marks : ");
	scanf("%d",&marks);
	
	if (marks > 85 && marks < 100){
		printf("You get A+ Grade");
	}
	else if (marks > 65 && marks < 85){
		printf("You get A Grade");
	}
	else if (marks > 45 && marks < 65){
		printf("You get A Grade");
	}
	else if (marks > 30 && marks < 45){
		printf("You get A Grade");
	}
	else{
		printf("You are fail...");
	}
	
	return 0;
}
