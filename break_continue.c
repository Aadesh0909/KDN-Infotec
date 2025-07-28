//break statement
//#include<stdio.h>
//int main (){
//	int i ;
//	for(i = 0; i <= 10; i++){
//		printf("%d ",i);
//		if(i == 5){
//			break;
//		}
//	}
//	printf("\ncome outside of loop i = %d",i);
//}



//break using for loop
//#include<stdio.h>
//int main (){
//	int i, j;
//	for(i = 1; i <= 3; i++){
//		for(j = 1; j <= 3; j++){
//				printf("%d, %d\n", i, j);
//		if(i == 2 && j == 2)
//			{
//				break;
//			}	
//		}	
//	}	
//}


//break using while loop
//#include<stdio.h>
//int main(){
//	int i = 0;
//	while(1)
//	{
//		printf("%d ",i);
//		i++;
//		if(i == 10){
//			break;
//		}
//	}
//	printf("\ncome out of while loop");
//}

//break using do while loop
//#include<stdio.h>
//int main(){
//	int n = 4, i ,choice;
//	do{
//		i = 1;
//		while(i <= 10){
//			printf("%d X %d = %d\n",n,i,n*i);
//			i++;
//		}
//		printf("do ypu want to continue with the table of %d, enter the non-zero value to continue.",n+1);
//		scanf("%d", &choice);
//		if( choice == 0){
//			break;
//		}
//		n++;
//	}
//	while(1);
//}



//1)

/*#include<stdio.h>
int main () {
	int i=1 ;
for ( i = 1; i <= 10; i++) {
    if (i == 5) {
        break;
    }
    printf("%d ", i);
}
}
*/

// 2)

/*#include<stdio.h>
int main () {
int i = 1;
while (i <= 10) {
    if (i == 7) {
        break;
    }
    printf("%d ", i);
    i++;
}
}
*/

// 3)

/*#include<stdio.h>
int main () {
	int i = 0;
while (1) {
    printf("%d ", i);
    if (i == 4)
	break;
    i++;
	}
}
*/

// 4)

/*#include<stdio.h>
int main () {
	int num;
while (1) {
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 1) 
	break;
    printf("You entered: %d\n", num);
}
}
*/

// 5)

/*#include<stdio.h>
int main() {
	int i=1, j=1;
	for (i = 1; i <= 3; i++) 
	{
	for (j = 1; j <= 5; j++)
	 {
        if (j == 3) 
		break;
        printf("i=%d, j=%d\n", i, j);
    }
}
}
*/

//6)

/*#include<stdio.h>
int main() {
	int i=1;
	for (i = 1; i <= 10; i++)
	 {
	 if (i == 4) 
	 continue;
	 if (i == 7) 
	 break;
    printf("%d ", i);
}
}
*/

// 7)

/*#include<stdio.h>
int main(){
char str[] = "HelloWorld";
int i=1;
for (i = 0; str[i] != '\0'; i++)
 {
    if (str[i] == 'W') 
	{
        printf("Found 'W' at index %d\n", i);
        break;
    }
}
}
*/

// 8)

/*#include<stdio.h>
int main() {
	int i=1;
	for ( i = 1; i <= 100; i++)
	 {
    if (i % 3 == 0 && i % 5 == 0)
	 {
        printf("%d is divisible by both 3 and 5\n", i);
        break;
    }
}
}
*/

// 9)

/*#include<stdio.h>
int main(){
	int num;
while (1) {
    printf("Enter an odd number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
	 {
        printf("Even number entered. Exiting.\n");
        break;
    }
}
}
*/

// 10)

//#include<stdio.h>
//int main() {
//	int i=1, j=1;
//	for (i = 1; i <= 3; i++) 
//	{
//	for (j = 1; j <= 5; j++)
//	 {
//        if (j == 3) 
//		break;
//        printf("i=%d , j=%d\n", i, j);
//    }
//}
//}

////////////////////////////////////////////////////////////
// continue statement
//#include<stdio.h>
//int main (){
//	int i ;
//	for(i = 0; i <= 10; i++){
//		
//		if(i == 5)	
//		continue;
//		printf("%d ",i);
//		
//	}
//	printf("\ncome outside of loop i = %d",i);
//}

//2)
//#include<stdio.h>
//int main(){
//	int i = 0;
//	while(i != 10){
//		printf("%d",i);
//		continue;
//		i++;
//	}
//}

//3)
//#include<stdio.h>
//int main(){
//	int i = 1;
//	for(i = 1; i <= 10; i++){
//		if(i == 5){
//			continue;
//		}
//		printf("%d\n",i);
//	}
//	return 0;
//}


//4)
//#include<stdio.h>
//int main(){
//	int i = 1, j = 1;
//	for(i = 1; i <= 3; i++){
//		for(j = 1; j <= 3; j++){
//			if(i == 2 && j ==2){
//				continue;
//			}
//			printf("%d %d\n",i,j);
//		}
//	}
//	return 0;
//}

//5)
//#include<stdio.h>
//int main(){
//	int num,i = 1;
//	printf("Enter the number whose table you want to print ? ");
//	scanf("%d",&num);
//	table:
//		printf("%d X %d = %d\n",num, i, num*i);
//		i++;
//		if(i <= 10)
//		goto table;
//
//}

//6)
//#include<stdio.h>
//int main(){
//	int i, j, k;
//	for(i = 0; i < 10; i++){
//		for(j = 0; j < 5; j++){
//			for(k = 0; k < 3; k++){
//				printf("%d %d %d\n",i ,j, k);
//				if(j == 3){
//					goto out;
//				}
//			}
//		}
//	}
//	out:
//		printf("Came out of the loop");
//}



////////////////////////////////////////////////////////
//type Casting

//#include<stdio.h>
//int main(){
//	int f = 9/4;
//	printf("f : %d\n",f);
//	
//	float f1 = (float)9/4;
//	printf("f : %f\n",f1);
//}
