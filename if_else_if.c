//#include<stdio.h>
//int main(){
//	int number = 0;
//	printf("Enter a number : ");
//	scanf("%d",&number);
//	
//	if(number == 10){
//		printf("Number is equal to 10");
//	}
//	else if(number == 50){
//		printf("Number is equal to 50");
//	}
//	else if(number == 100){
//		printf("Number is equal to 100");
//	}
//	else{
//		printf("the number is not equal to 10 50 or 100");
//	}
//	return 0;
//
//}


//#include<stdio.h>
//int main(){
//	int number = 0;
//	printf("Enter a number : ");
//	scanf("%d",&number);
//	
//	if(number == 1){
//		printf("today is monday");
//	}
//	else if(number == 2){
//		printf("today is tuesday");
//	}
//	else if(number == 3){
//		printf("today is wednesday");
//	}
//	else if(number == 4){
//		
//		printf("today is thursday");
//	}
//	else if(number == 5){
//		printf("today is friday");
//	}
//	else{
//		printf("today is saturday or sunday");
//	}
//	return 0;
//}


#include<stdio.h>
int main(){
	int marks = 0;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks > 85 && marks <= 100){
		printf("Congrats! you scored grade A...");
	}
	else if( marks > 60 && marks <=85){
		printf("you scored grade B+...");
	}
	else if( marks > 40 && marks <= 60){
		printf("you scored grade B...");
	}
	else if( marks > 30 && marks <= 40){
		printf("you scored grade c...")
	}
	else{
		printf("you are fail ....");
	}
	return 0;
}




