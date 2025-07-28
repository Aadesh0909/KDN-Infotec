#include<stdio.h>
int main()
{
	int x = 0 , y = 0,result = 0;
	
	printf ("Enter First number :");
	scanf("%d", &x);
	
	printf ("Enter Second number :");
	scanf("%d", &y);
	
	result = x + y;
	printf("Sum of Two numbers : %d", result);
	
	return 0;
}
