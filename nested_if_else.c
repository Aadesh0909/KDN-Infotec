#include<stdio.h>
int main(){
	int num = 6;
	if(num > 0){
		printf("no is positive\n");
		if(num % 2 == 0){
			printf("no is even");
		}
		else{
			printf("no is odd\n");
		}
	}
	else{
		printf("no is negative");
	}
	
	return 0;
}
