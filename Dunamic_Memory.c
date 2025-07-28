//1) Malloc

//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int n , i, *ptr, sum = 0;
//	printf("Enter number of Elements : ");
//	scanf("%d",&n);
//	
//	ptr = (int*)malloc(n * sizeof(int));
//	
//	if(ptr == NULL){
//		printf("Sorry ! unable to allocate memory");
//		exit(0);
//	}
//	printf("Enter Elements of array : ");
//	for(i = 0; i < n; ++i){
//		scanf("%d",ptr + i);
//		sum += *(ptr + i);
//	}
//	printf("sum of elements : %d ", sum);
//  free(ptr);
//	return 0;
//}

//2) Calloc
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int n , i, *ptr, sum = 0;
//	printf("Enter number of Elements : ");
//	scanf("%d",&n);
//	
//	ptr = (int*)calloc(n, sizeof(int));
//	
//	if(ptr == NULL){
//		printf("Sorry ! unable to allocate memory");
//		exit(0);
//	}
//	printf("Enter Elements of array : ");
//	for(i = 0; i < n; ++i){
//		scanf("%d",ptr + i);
//		sum += *(ptr + i);
//	}
//	printf("sum of elements : %d ", sum);
//	free(ptr);
//	return 0;
//}

//3) realloc
#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int n , i, *ptr, sum = 0;
//	printf("Enter number of Elements : ");
//	scanf("%d",&n);
//	
//	ptr = (int*)malloc(n * sizeof(int));
//	
//	printf("Enter Elements of array : ");
//	for(i = 0; i < n; ++i){
//		scanf("%d",ptr + i);
//	}
//	printf("I want to add more values :- ");
//	scanf("%d",&n);
//	
//	int *ptr1 = (int*)realloc(ptr, n * sizeof(int));
//	for(i = 0; i < n; i++){
//		scanf("%d",(ptr + i));
//	} 
//	printf("\n previos address : %d , new Address : %d\n",ptr, ptr1);
//	printf("enter any value : ");
//	for(i = 0; i < n; i++){
//		printf("%d ",*(ptr1 + i));
//	}
//	free(ptr1);
//	return 0;
//}
