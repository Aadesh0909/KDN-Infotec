//#include<stdio.h>
//void main(){
//	int n, f;
//	printf("\nEnter the number : ");
//	scanf("%d",&n);
//	f = fact(n);
//	printf("factorial : %d",f);
//	
//}
//
//int fact(int n){
//	if(n == 0){
//		return 0;
//	}
//	else if(n == 1){
//		return 1;
//	}
//	else{
//		return n * fact(n-1);
//	}
//}

////////////////////////////////////////
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}


//////////////////////////////////////////////////////////
//stogare classes in c 
//Automatice
//
//#include<stdio.h>
//int main(){
//	int a;//auto
//	float b;
//	char c;
//	printf("\n%d\n%f\n%c",a,b,c);
//	return 0;	
//} 


//2)
//#include<stdio.h>
//int main(){
//	int a = 10, i;//auto
//	printf("\n%d",++a);
//	{
//		int a = 20;
//		for( i = 0; i < 3; i++){
//			printf("\n%d",a);
//		}
//		
//	}
//	printf("\n%d",a);
//	
//	return 0;	
//} 


//////////////////////////////////////////
//static
//#include<stdio.h>
//void sum()
//{
//	static int a = 10;
//	static int b = 24;	
//	printf("%d %d\n", a,b);
//	a++;
//	b++;
//}
//void main(){
//	int i;
//	for(i = 0; i < 3;i++)
//	
//	{
//		sum();
//	}
//}


///////////////////////////////////////////////////////////
//Register
//#include<stdio.h>
//int main(){
//	register int a;
//	printf("%d",a);
//}

/////////////////////////////////////
//Extern
//#include<stdio.h>
//int a;
//int main(){
//	extern int a;
//	printf("%d",a);
//}
