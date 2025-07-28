#include<stdio.h>
int main(){
	int a = 3;
	int b;
	
	b = a++ + a++ + ++a + --a + a--;
	printf("%d", b);
	return 0;
} 
