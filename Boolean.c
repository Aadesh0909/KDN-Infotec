//#include<stdio.h>
//#include<stdbool.h>
//int main(){
//	bool x = false;
//	if (x == true){
//		printf("the value of X is true");
//	}
//	else
//	printf("the value of X is false");
//	return 0;
//}


//#include<stdio.h>
//#include<stdbool.h>
//int main(){
//	bool b[2] = {true,false};
//	int i =0;
//	for(i = 0; i < 2; i++){
//		printf("%d,",b[i]);
//	}
//	return 0;
//}

#include<stdio.h>
#include<stdbool.h>
int main(){
	bool x = false;
	bool y = true;
	printf("the value of X && Y is %d\n",x&&y);
	printf("the value of X || Y id %d\n",x||y);
	printf("the value of !X  id %d\n",!x);

	return 0;
}
