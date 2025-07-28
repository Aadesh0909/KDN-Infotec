//#include<stdio.h>
//int main(){
//	int i = 0;
//	for(i = 1; i<= 10; i++){
//		printf("%d\n",i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i = 0;
//	for(i = 10; i>= 1; i--){
//		printf("%d\n",i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i = 0;
//	for(i = 1; i<= 10; i++){
//		printf("%d\n",i*i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i = 0;
//	for(i = 1; i<= 10; i++){
//		printf("%d\n",i*i*i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i = 0 ,num = 0;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//	for(i = 1; i<= 10; i++){
//		printf("%d * %d = %d\n",i,num,i*num);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i ;
//	for(i = 1; i<=10;i++){
//		if(i % 2 == 0){
//			printf("%d\n",i);
//		}		
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i ;
//	for(i = 1; i<=10;i++){
//		if(i % 2 == 1){
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i , sum = 0;
//	for(i = 1;i <= 10;i++){
//		sum = sum + i;
//		
//	}
//	printf("%d",sum);
//	return 0;
//}0

//#include<stdio.h>
//int main(){
//	int i ,num, sum = 0;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//	for(i = 1;i <= num ;i++){
//		sum = sum + i;

//		
//	}
//	printf("%d",sum);
//	return 0;
//}

// factorial Number
//#include<stdio.h>
//int main(){
//	int i ,num,fact = 1;
//		printf("Enter a number : ");
//	    scanf("%d",&num);
//	    
//	    for(i = num; i >= 1; i--){
//	    	fact = fact * i;
//		}
//		printf("%d",fact);
//		return 0;
//}

//#include<stdio.h>
//int main(){
//	int i , num , fact = 1;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//	
//	for(i = 1; i <= num; i++){
//		fact = fact * i;
//	}
//	printf("%d", fact);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i , num = 5 , fact = 1;
//	
//	for(i = 1; i <= num; i++){
//		fact = fact * i;
//	}
//	printf("%d", fact);
//	return 0;
//}

// reverse number

//#include<stdio.h>
//int main(){
//	int n , rev= 0 , rem;
//	printf("Enter a number : ");
//	scanf("%d",&n);
//	
//	for( ;n != 0; ){
//		rem = n % 10;
//		rev = rev * 10 + rem;
//		n = n / 10;
//	}
//	printf("%d", rev);
//	return 0;
//}

////palindrome number
//#include<stdio.h>
//int main(){
//	int n , rev= 0 , rem, temp;
//	printf("Enter a number : ");
//	scanf("%d",&n);
//	temp = n;
//	for( ;n != 0; ){
//		rem = n % 10;
//		rev = rev * 10 + rem;
//		n = n / 10;
//	}
//	if(rev == temp){
//		printf("Given number is palindrome");
//	}else{
//		printf("Given number is not palindrome");
//	}
//	return 0;
//}

//  Armstrong number
//#include<stdio.h>
//int main(){
//	int n , temp ,sum = 0,rem, cube =0;
//	printf("Enter a number :");
//	scanf("%d",&n);
//	temp = n;
//	for( ;n != 0;){
//		rem = n % 10;
//		
//		cube = rem * rem * rem;
//		sum = sum+cube;
//		
//		n = n/10;
//	}
//	if(temp == sum){
//		printf("Number is Armstrong");
//	}else{
//		printf("number is not Armstrong");
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main(){
//	int a,b,c;
//	
//	for(a = 0, b = 12, c = 23; a < 2; a++){
//		printf("%d ",a+b+c);
//	}
//	return 0;
//}

// 
//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 2;
//	for(i = 0; i < 5; i++, j = j + 2 ){
//		printf("%d %d \n", i, j);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	for(i = 0; i < 10; i++){
//		int i = 20;
//		printf("%d\n", i);
//	}
//}











