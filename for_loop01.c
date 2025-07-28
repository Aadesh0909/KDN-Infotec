//#include<stdio.h>
//int main(){
//	int i, sum = 0;
//	for(i = 1; i <= 10; i++){
//		if(i % 2 == 0){
//			sum = sum + i;
//		}
//	}
//	printf("%d",sum);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i, sum = 0;
//	for(i = 1; i <= 10; i++){
//		if(i % 2 != 0){
//			sum = sum + i;
//		}
//	}
//	printf("%d",sum);
//	return 0;
//}

#include<stdio.h>
int main(){
	int i;
	for(i = 1; i <= 10; i++){
		if(i % 2 == 0){
		printf(" Even number : %d\n",i);	
		}else{
		printf(" Odd number : %d\n",i);	
		}
	}
	
	return 0;
}
