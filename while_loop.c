
//1) 1 to 10
//#include<stdio.h>
//int main (){
//	int i = 1;
//	while(i <= 10){
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}

//2) 10 to 1
//#include<stdio.h>
//int main (){
//	int i = 10;
//	while(i >= 1){
//		printf("%d\n",i);
//		i--;
//	}
//	return 0;
//}


//3) square
//#include<stdio.h>
//int main (){
//	int i = 1;
//	while(i <= 10){
//		printf("%d\n",i*i);
//		i++;
//	}
//	return 0;
//}


//4) cube
//#include<stdio.h>
//int main (){
//	int i = 1;
//	while(i <= 10){
//		printf("%d\n",i*i*i);
//		i++;
//	}
//	return 0;
//}


//table
//#include<stdio.h>
//int main (){
//	int i = 1 , num;
//	printf("enter a number :");
//	scanf("%d", &num);
//	while(i <= 10){
//		printf("%d\n",num*i);
//		i++;
//	}
//	return 0;
//}

//odd Even
//#include<stdio.h>
//int main (){
//	int i = 1;
//	while(i <= 10){
//		if(i % 2 == 0){
//			printf("Even number : %d\n", i);
//		}
//		else{
//			printf("Odd number : %d\n", i);	
//		}
//		i++;
//	}
//	return 0;
//}


//sum of even numbers
//#include<stdio.h>
//int main (){
//	int i = 1, sum = 0;
//	while(i <= 10){
//		if(i % 2 == 0){
//			sum = sum + i;	
//		}
//		i++;
//	}
//	printf("sum of even numbers : %d\n", sum);
//	return 0;
//}


//sum of odd numbers
//#include<stdio.h>
//int main (){
//	int i = 1, sum = 0;
//	while(i <= 10){
//		if(i % 2 != 0){
//			sum = sum + i;	
//		}
//		i++;
//	}
//	printf("sum of 0dd numbers : %d\n", sum);
//	return 0;
//}


// print 1 to 10 and there sum
//#include<stdio.h>
//int main (){
//	int i = 1, sum = 0;
//	while(i <= 10){
//		
//		sum = sum + i;
//		printf("%d\n",i);	
//		i++;
//	}
//	printf("sum of numbers : %d\n", sum);
//	return 0;
//}

//factorial
//#include<stdio.h>
//int main (){
//	int i = 1, fact = 1,num;
//	printf("enter a number :");
//	scanf("%d", &num);
//	while(i <= num){	
//		fact = fact * i;	
//		i++;
//	}
//	printf("factorial is : %d\n", fact);
//	return 0;
//}


// factorial 
//#include<stdio.h>
//int main (){
//	int fact = 1,num;
//	printf("enter a number :");
//	scanf("%d", &num);
//	while(num >= 1){	
//		fact = fact * num;	
//		num--;
//	}
//	printf("factorial is : %d\n", fact);
//	return 0;
//}

//reverce number
//#include<stdio.h>
//int main(){
//	int i, rev, rem,num;
//	printf("enter a number :");
//	scanf("%d", &num);
//	
//	while( num != 0){
//		rem = num % 10;
//		rev = rev * 10 + rem;
//		num = num / 10;
//	}
//}

//palindrome
//#include<stdio.h>
//int main(){
//	int rev, rem, num, temp;
//	printf("enter a number :");
//	scanf("%d", &num);
//	temp = num;
//	while( num != 0){
//		rem = num % 10;
//		rev = rev * 10 + rem;
//		num = num / 10;
//	}
//	if(temp == rev){
//		printf("number is palindrome");
//	}else{
//		printf("number is not palindrome");
//	}	
//}

//find sum of digit of number
//#include<stdio.h>
//int main(){
//	int  sum, rem,num;
//	printf("enter a number :");
//	scanf("%d", &num);
//	
//	while( num != 0){
//		rem = num % 10;
//		sum = sum + rem;
//		num = num / 10;
//	}
//	printf("%d", sum);
//}

//find multiplication of digit of number
//#include<stdio.h>
//int main(){
//	int  sum = 1, rem,num;
//	printf("enter a number :");
//	scanf("%d", &num);
//	
//	while( num != 0){
//		rem = num % 10;
//		sum = sum * rem;
//		num = num / 10;
//	}
//	printf("%d", sum);
//}

//Armstrong number
//#include<stdio.h>
//int main(){
//	int n , temp ,sum = 0,rem;
//	printf("Enter a number :");
//	scanf("%d",&n);
//	temp = n;
//	while(n != 0){
//		rem = n % 10;
//		sum = sum+(rem*rem*rem);
//		n = n/10;
//	}
//	if(temp == sum){
//		printf("Number is Armstrong");
//	}else{
//		printf("number is not Armstrong");
//	}
//	return 0;
//}

//fibonacci series
//#include<stdio.h>
//int main(){
//	int num, x = 0, y = 1, z = 0;
//	printf("Enter a number :");
//	scanf("%d",&num);	
//	while(z <= num){
//		printf("%d ", z);
//		x = y;
//		y = z;
//		z = x + y;	
//	}
//}
