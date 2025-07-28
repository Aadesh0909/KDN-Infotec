//1)
//#include<stdio.h>
//int main(){
//	int number = 50;
//	int *p;
//	int **p2;
//	p = &number;
//	p2 = &number;
//	p2 = &p;
//	printf("Adress of number variable is %x \n", &number);
//	printf("Adress of p variable is %x \n", p);
//	printf("Adress of *p variable is %x \n", *p);
//	printf("Adress of p2 variable is %x \n", p2);
//	printf("Adress of **p2 variable is %x \n", **p2);
//	return 0;
//}


//2) swapping
//#include<stdio.h>
//int main(){
//	int a = 10, b = 20, *p1 = &a, *p2 = &b;
//	printf("Before Swap : *p1 = %d  *p2 = %d \n", *p1, *p2);
//	 *p1 = *p1 + *p2;
//	 *p2 = *p1 - *p2;
//	 *p1 = *p1 - *p2;
//	 printf("After Swap : *p1 = %d  *p2 = %d", *p1, *p2);
//}

//3) swapping using third variable
//#include<stdio.h>
//int main(){
//	int a = 10, b = 20, *p1 = &a, *p2 = &b, temp;
//	printf("Before Swap : *p1 = %d  *p2 = %d \n", *p1, *p2);
//	 temp = *p1;
//	 *p1 = *p2;
//	 *p2 = temp;
//	 printf("After Swap : *p1 = %d  *p2 = %d", *p1, *p2);
//}

//4) increment in pointer
//#include<stdio.h>
//int main(){
//	int a = 50;
//	int *p = &a;
//	printf("Address of p variable is %u \n", p);
//	p = p + 1;	 
//	 printf("After increment : Address of p variable is %u \n", p);
//	 return 0;
//}

//5) decrement in  pointer
//#include<stdio.h>
//int main(){
//	int a = 50;
//	int *p = &a;	
//	printf("Address of p variable is %u \n", p);
//	p = p - 1;	 
//	 printf("After decrement : Address of p variable is %u \n", p);
//	 return 0;
//}

//6)
//#include<stdio.h>
//int main(){
//	int arr[5]= {1, 2, 3, 4, 5};
//	int *p = arr;
//	int i;	
//	printf("printing array elements ......\n");
//	
//	for(i = 0; i < 5; i++){
//		printf("%d",*(p + i));
//	}
//	return 0;
//}

//7) Add 3 in pointer
//#include<stdio.h>
//int main(){
//	int a = 50;
//	int *p = &a;	
//	printf("Address of p variable is %u \n", p);
//	p = p + 3;	 
//	printf("After Adding 3 : Address of p variable is %u \n", p);
//	return 0;
//}

//8) sub 3 in pointer 
//#include<stdio.h>
//int main(){
//	int a = 50;
//	int *p = &a;	
//	printf("Address of p variable is %u \n", p);
//	p = p - 3;	 
//	printf("After Substraction 3 : Address of p variable is %u \n", p);
//	return 0;
//}

//9) substraction in address
//#include<stdio.h>
//int main(){
//	int a = 100;
//	int *p = &a;
//	int *temp ;
//	temp = p;	
//	p = p + 3;
//	printf("pointer substraction : %d - %d = %d", p , temp, p - temp);
//	return 0;
//}

//10)
//#include<stdio.h>
//int add();
//int main (){
//	int result;
//	int (*ptr)();
//	ptr = &add;
//	result = (*ptr)();
//	printf("the sum is %d ",result);
//}
//int add(){
//	int a, b;
//	printf("Enter two numbers : ");
//	scanf("%d%d",&a,&b);
//	return a + b;
//}

// Dereference pointer in C 
//#include<stdio.h>
//int main(){
//	int x = 9;
//	int *ptr ;
//	ptr = &x ;
//	*ptr = 8;
//	printf("value of X is : %d", x);
//	return 0;
//}


//
//#include<stdio.h>
//int main(){
//	int x = 4;
//	int y;
//	int *ptr ;
//	ptr = &x ;
//	y = *ptr;
//	*ptr = 5;
//	printf("value of X is : %d\n", x);
//	printf("value of y is : %d", y);
//	return 0;
//}

//
#include<stdio.h>
int main(){
	int a = 90;
	int *ptr1, *ptr2 ;
	ptr1 = &a ;
	ptr2 = &a;
	*ptr1 = 7;
	*ptr2 = 6;
	printf("value of X is : %d\n", a);
	
	return 0;
}
