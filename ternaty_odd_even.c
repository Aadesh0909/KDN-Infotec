#include<stdio.h>
int main (){
	int num;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	(num % 2 == 0) ? printf("Even Number") : printf("Odd Number");
	return 0;
}
