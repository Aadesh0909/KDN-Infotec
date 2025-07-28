//#include<stdio.h>
//int main (){
//	int i = 1 ;
//	
//	while( i <= 10){
//		while (i % 2 == 0){
//			printf("%d is positive number\n", i);
//			i++;
//		}
//		i++;
//	}
//	
//}


//#include<stdio.h>
//int main (){
//	int i = 1 ;
//	
//	while( i <= 5){
//		int j = 1;
//		while (j <= 3){
//			printf("%d", j);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}

// Do-While Loop
//1) assending
//#include<stdio.h>
//int main(){
//	int i = 1;
//	do{
//		printf("%d\t",i);
//		i++;
//	}while(i <= 10);
//	return 0;
//}


//2) disending
//#include<stdio.h>
//int main(){
//	int i = 10;
//	do{
//		printf("%d\t",i);
//		i--;
//	}while(i >= 1);
//	return 0;
//}


//square
//#include<stdio.h>
//int main(){
//	int i = 1;
//	do{
//		printf("%d\t",i*i);
//		i++;
//	}while(i <= 10);
//	return 0;
//}


//3) cube
//#include<stdio.h>
//int main(){
//	int i = 1;
//	do{
//		printf("%d\t",i*i*i);
//		i++;
//	}while(i <= 10);
//	return 0;
//}

//4) table
//#include<stdio.h>
//int main(){
//	int i = 1 ,num;
//	printf("enter a number :");
//	scanf("%d", &num);
//	do{
//		printf("%d\n",num*i);
//		i++;
//	}while(i <= 10);
//	return 0;
//}


//5) even number
//#include<stdio.h>
//int main(){
//	int i = 1;
//	do{
//		if(i % 2 == 0){
//			printf("%d\n",i);
//		}
//		i++;
//	}while(i <= 10);
//	return 0;
//}

//Odd number
//#include<stdio.h>
//int main(){
//	int i = 1;
//	do{
//		if(i % 2 != 0){
//			printf("%d\n",i);
//		}
//		i++;
//	}while(i <= 10);
//	return 0;
//}

//6) sum of even numbers
//#include<stdio.h>
//int main(){
//	int i = 1 , sum = 0;
//	do{
//		if(i % 2 == 0){
//			sum = sum + i;
//		}
//		i++;
//		
//	}while(i <= 10);
//	printf("%d", sum);
//	return 0;
//}

//7) sum of Odd numbers
//#include<stdio.h>
//int main(){
//	int i = 1 , sum = 0;
//	do{
//		if(i % 2 != 0){
//			sum = sum + i;
//		}
//		i++;
//		
//	}while(i <= 10);
//	printf("%d", sum);
//	return 0;
//}


//8) print 1 to 10 and there sum
//#include<stdio.h>
//int main(){
//	int i = 1 , sum = 0;
//	do{
//		printf("%d ",i);
//		sum = sum +i;
//		i++;		
//	}while(i <= 10);
//	printf("%d", sum);
//	return 0;
//}


// 9) factorial
//#include<stdio.h>
//int main(){
//	int num, fact = 1, i;
//	printf("enter a number :");
//	scanf("%d", &num);
//	
//	do{
//		fact = fact * i;
//		i++;
//	}while(i <= num);
//	printf("%d",fact);
//	return 0;
//}

// 10) factorial
//#include<stdio.h>
//int main(){
//	int num, fact = 1, i;
//	printf("enter a number :");
//	scanf("%d", &num);
//	
//	do{
//		fact = fact * num;
//		num--;
//	}while(num >= i);
//	printf("%d",fact);
//	return 0;
//}

// 11) reverce number
//#include<stdio.h>
//int main (){
//	int i , rev, rem, num;
//	 printf("enter a number :");
//	scanf("%d", &num);
//	do{
//		rem = num % 10;
//		rev = rev * 10 + rem;
//		num = num / 10;
//	}while(num != 0);
//	printf("%d",rev);
//}

// 12) palindrome number
//#include<stdio.h>
//int main (){
//	int i , rev, rem, num, temp;
//	 printf("enter a number :");
//	scanf("%d", &num);
//	temp = num;
//	do{
//		rem = num % 10;
//		rev = rev * 10 + rem;
//		num = num / 10;
//	}while(num != 0);
//	if(temp == rev){
//		printf("%d is palindrome",temp);
//	}else{
//		printf("%d is not palindrome",temp);
//	}
//}


// 13) find the sum of digits 
//#include<stdio.h>
//int main (){
//	int i , sum, rem, num;
//	 printf("enter a number :");
//	scanf("%d", &num);
//	do{
//		rem = num % 10;
//		sum = sum + rem;
//		num = num / 10;
//	}while(num != 0);
//	printf("%d",sum);
//}

// 14) find the multiplication of digits 
//#include<stdio.h>
//int main (){
//	int i , mult, rem, num;
//	 printf("enter a number :");
//	scanf("%d", &num);
//	do{
//		rem = num % 10;
//		mult = mult + rem;
//		num = num / 10;
//	}while(num != 0);
//	printf("%d",mult);
//}

// 15) Armstrong number
//#include<stdio.h>
//int main (){
//	int i , arm, rem, num, temp;
//	 printf("enter a number :");
//	scanf("%d", &num);
//	temp = num;
//	do{
//		rem = num % 10;
//		arm = arm + (rem * rem * rem);
//		num = num / 10;
//	}while(num != 0);
//	if(temp == arm){
//		printf("%d is Armstrong",temp);
//	}else{
//		printf("%d is not Armstrong",temp);
//	}
//}


//16) fibonocci series
//#include<stdio.h>
//int main(){
//	int x = 0, y = 1, z = 0, num;
//	printf("enter a number :");
//	scanf("%d", &num);
//	do{
//		printf("%d ",z);
//		x = y;
//		y = z;
//		z = x + y;
//	}while(z <= num);
//}
