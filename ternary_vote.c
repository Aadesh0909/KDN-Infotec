#include<stdio.h>
int main (){
//	int age = 23;
	int age;
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	(age >= 18) ? printf("Your are eligible for vote") : printf("Your are not eligible for vote");
	return 0;
}
