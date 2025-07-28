//1)
//* * * * *
//* * * * *
//* * * * *
//* * * * *
//* * * * *

//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= 5; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//2)
//*
//* *
//* * *
//* * * *
//* * * * *

//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//3)
//* * * * *
//* * * *
//* * *
//* *
//*

//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//4)
//        *
//      * *
//    * * *
//  * * * *
//* * * * *

//#include<stdio.h>
//int main(){
//	int row, col, space;
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf("  ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	} 
//}

//5)
//* * * * *
//  * * * *
//    * * *
//      * *
//        *

//#include<stdio.h>
//int main(){
//	int row, col, space;
//	for(row = 1; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf("  ");
//		}
//		for(col = 5; col >= row; col--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//6)
//    *
//   * *
//  * * *
// * * * *
//* * * * *

//#include<stdio.h>
//int main(){
//	int row, col, space;
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row;space--){
//			printf(" ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//7)
// * * * * *
//  * * * *
//   * * *
//    * *
//     *


//#include<stdio.h>
//int main(){
//	int row, col, space;
//	for(row = 1; row <= 5; row++){
//		for(space = 1; space <= row; space++){
//			printf(" ");
//		}
//		for(col = 5; col >= row; col--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}





//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= 5; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main(){
//	int row, col;
//	for (row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			printf("* ");
//		}
//		printf("\n")
//	}
//}

//#include<stdio.h>
//int main(){
//	int row, col, space;
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space --){
//			printf("  ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main(){
//	int row, col, space;
//	for(row = 1; row <= 5; row++){
//		for(space = 1; space > row; space++){
//			printf("  ");
//		}
//		for(col = 5; col >= row; col--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}


#include<stdio.h>
int main(){
	int row, col, space;
	for(row = 1; row <= 5; row++){
		for(space = 4; space >= row; space --){
			printf(" ");
		}
		for(col = 1; col <= row; col++){
			printf("* ");
		}
		printf("\n");
	}
}





















