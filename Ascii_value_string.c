#include<stdio.h>
int main (){
	int sum =0;
	char name[20];
	int i = 0;
	
	printf("Enter the name : ");
	scanf("%s",&name);
	
	while(name[i]!='\0'){
		printf("\n the ascii value of a character %c is %d",name[i],name[i]);
		sum = sum +name[i];
		i++;
		
	}
	printf("\n Sum of the ascii value of a string is : %d",sum);
	return 0;
}
