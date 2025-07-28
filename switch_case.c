
#include<stdio.h>
int main (){
	int num = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	switch(num){
		case 10:
			printf("number is equal to 10");
			break;
		case 50:
			printf("number is equal to 50");
			break;
		case 100:
			printf("number is equal to 100");
			break;
		default:
			printf("number is not matche");
	}
}
