#include<stdio.h>
int main (){
	int a;
	int b;
	int result;
	printf("Enter the first number : ");
	scanf("%d",&a);
	
	printf("Enter the second number : ");
	scanf("%d",&b);
	
	result = a % b;
	printf("%d",result);
	return 0;
}


