//1)

//#include<stdio.h>
//void change(int num){
//	printf("Before adding value inside the function num =  %d\n",num);
//	num =  num + 100;
//	printf("After adding value inside the function num =  %d\n",num);
//}
//int main(){
//	int x = 100;
//	printf("Before function call x = %d\n", x);
//	change(x);
//	printf("After function call x = %d\n", x);
//	return 0;
//	
//}

//2)
//#include<stdio.h>
//void swap(int, int);
//int main(){
//	int  a = 10;
//	int b = 20;
//	printf("Before Swapping the value in main a = %d, b = %d\n",a,b);
//	swap(a,b);
//	printf("After Swapping the value in main a = %d, b = %d\n",a,b);
//	
//	return 0;	
//}
//void swap(int a, int b){
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

//3)
//#include<stdio.h>
//void change(int *num){
//	printf("Before adding value inside the function num = %d\n",*num);
//	(*num) += 100;
//	printf("After adding value inside the function num = %d\n",*num);
//}
//int main(){
//	int x = 100;
//	printf("Before function call x = %d\n", x);
//	change(&x);
//	printf("After function call x = %d\n", x);
//	return 0;
//}

//4)
#include<stdio.h>
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}	
int main(){
	int  a = 10;
	int b = 20;
	printf("Before Swapping the value in main a = %d, b = %d\n",a,b);
	swap(&a,&b);
	printf("After Swapping the value in main a = %d, b = %d\n",a,b);
	
	return 0;	
}

