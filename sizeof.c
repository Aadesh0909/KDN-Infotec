//1)
//#include<stdio.h>
//int main (){
//	int x = 89;
//	printf("Size of the variable X is %d\n", sizeof(x));
//	printf("Size of integer data type is %d\n", sizeof(int));
//	printf("Size of character data type is %d\n", sizeof(char));
//	printf("Size of float data type is %d\n", sizeof(float));
//	return 0;
//}

//2)
//#include<stdio.h>
//int main (){
//	double i = 89.0;
//	float j = 6.78;
//	printf("Size of (i + j) expression  is %d\n", sizeof(i + j));
//	return 0;
//}


//3) constant pointer
//#include<stdio.h>
//int main (){
//	int a = 1, b = 2;
//	int *const ptr ;
//	ptr = &a;  //error
//	ptr = &b;
//	
//	printf("value of ptr is : %d",*ptr);
//	return 0;
//}

//4) pointer to constant
//#include<stdio.h>
//int main (){
//	int a = 100;
//	int b = 200;
//	const int *ptr;
//	ptr = &a;
//	ptr = &b;  
//	printf("value of ptr is : %u",ptr);
//	return 0;
//}

//5)
//#include<stdio.h>
//int main (){
//	int a = 100;
//	int b = 200;
//	const int *ptr;
//	ptr = &b;
//	*ptr = 300;  
//	printf("value of ptr is : %u",*ptr);
//	return 0;
//}

//6)
//#include<stdio.h>
//int main (){
//	int a = 100;
//	int b = 200;
//	const int * const ptr = &a;
//	ptr = 12;
//	ptr = &b;  
//	printf("value of ptr is : %u",*ptr);
//	return 0;
//}

//7) void pointer
//#include<stdio.h>
//int main (){
//	void *ptr = NULL;
//	int *p = NULL;
//	char *cp = NULL;
//	float *fp = NULL;
//	printf("sizeof of void pointer = %d\n\n", sizeof(ptr));
//	printf("sizeof of integer pointer = %d\n\n", sizeof(p));
//	printf("sizeof of character pointer = %d\n\n", sizeof(cp));
//	printf("sizeof of float pointer = %d\n\n", sizeof(fp));
//	return 0;
//}

//8)void pointer
//#include<stdio.h>
//int main(){
//	int a = 90;
//	void *ptr;
//	ptr = &a;
//	printf("value which is pointed by ptr pointer : %d", *ptr);
//	return 0;
//}


//9)void pointer type casting
//#include<stdio.h>
//int main(){
//	int a = 90;
//	void *ptr;
//	ptr = &a;
//	printf("value which is pointed by ptr pointer : %d", *(int*)ptr);
//	return 0;
//}
