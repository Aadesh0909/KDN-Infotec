///////////////////////////////////////////////////////////////////////////
//1)
//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*
//

//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for(row = 2; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("%d ",row);
//		}
//		printf("\n");
//	}
//	for(row = 2; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			printf("%d ",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
 
 //3)
// #include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("%d ",col);
//		}
//		printf("\n");
//	}
//	for(row = 2; row <= 5; row++){
//		int col1= 1;
//		for(col = 5; col >= row; col--){
//			printf("%d ",col1);
//			col1++;
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
 
//4)
//#include<stdio.h>
//int main(){
//	int row, col, num =1;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("%d ",num);
//			num++; 
//		}
//		printf("\n");
//	}
//	for(row = 2; row <= 5; row++){
//		int col1= 1;
//		for(col = 5; col >= row; col--){
//			printf("%d ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5)
//#include<stdio.h>
//int main(){
//	int row, col, num =65;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("%c ",num);
//			num++; 
//		}
//		printf("\n");
//	}
//	for(row = 2; row <= 5; row++){
//		int col1= 1;
//		for(col = 5; col >= row; col--){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6)
//#include<stdio.h>
//int main(){
//	int row, col, num =97;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("%c ",num);
//			num++; 
//		}
//		printf("\n");
//	}
//	for(row = 2; row <= 5; row++){
//		int col1= 1;
//		for(col = 5; col >= row; col--){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//7)
//#include<stdio.h>
//int main(){
//	int row, col, num = 1;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			if(col % 2 == 1){
//				printf("%d ",col);
//				num++;	
//			}
//			else{
//				printf("  ");
//			} 
//		}
//		printf("\n");
//	}
//	for(row = 2; row <= 5; row++){
//		int col1= 1;
//		for(col = 5; col >= row; col--){
//			if(col % 2 == 1){
//				printf("%d ",col1);
//				col1= col1 + 2;	
//			}
//			else{
//				printf("  ");
//			}	
//		}
//		printf("\n");
//	}
//	return 0;
//}

//8)
//#include<stdio.h>
//int main(){
//	int row, col, num = 1;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			if(col % 2 == 1){
//				printf("%d ",row);
//				num++;	
//			}
//			else{
//				printf("  ");
//			} 
//		}
//		printf("\n");
//	}
//	for(row = 4; row >= 1; row--){
//		for(col = 1; col <= row; col++){
//			if(col % 2 == 1){
//				printf("%d ",row);		
//			}
//			else{
//				printf("  ");
//			}	
//		}
//		printf("\n");
//	}
//	return 0;
//}

//9)
//#include<stdio.h>
//int main(){
//	int row, col, num = 1;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			if(col % 2 == 1){
//				printf("%d ",row);
//				num++;	
//			}
//			else{
//				printf("  ");
//			} 
//		}
//		printf("\n");
//	}
//	for(row = 4; row >= 1; row--){
//		for(col = 1; col <= row; col++){
//			if(col % 2 == 1){
//				printf("%d ",row);		
//			}
//			else{
//				printf("  ");
//			}	
//		}
//		printf("\n");
//	}
//	return 0;
//}


//10)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			if(col == 1 || row == 5|| row == col){
//				printf("* ");
//			}
//			else{
//				printf("  ");
//			}
//			
//		}
//		printf("\n");
//	}
//	for(row = 2; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			if(row-1 == col || row == 2 || col == 5 ){
//				printf("* ");
//			}
//			else{
//				printf("  ");
//			}
//		printf("\n");
//	}
//	return 0;
//}
//}

//11)
//#include <stdio.h>
//int main() {
//    int row, col, n = 5;
//    for(row = 1; row <= n; row++) {
//        for(col = 1; col <= row; col++) {
//            if(col == 1 || col == row)
//                printf("* ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(col = 1; col <= row; col++) {
//            if(col == 1 || col == row)
//                printf("* ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//12)
//#include <stdio.h>
//int main() {
//    int row, col, n = 4;
//    for(row = 1; row <= n; row++) {
//        for(col = 1; col < row; col++) 
//			printf("  ");
//        	printf("*\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(col = 1; col < row; col++) 
//			printf("  ");
//        	printf("*\n");
//    }
//    return 0;
//}

//13)
//#include <stdio.h>
//int main() {
//    int row, col, n = 4;
//    for(row = 1; row <= n; row++) {
//        for(col = 1; col <= row; col++)
//            printf("%d ", (row+col)%2);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(col = 1; col <= row; col++)
//            printf("%d ", (row+col)%2);
//        printf("\n");
//    }
//    return 0;
//}

//14)
//#include <stdio.h>
//int main() {
//    int row, col, n = 5;
//    for(row = 1; row <= n; row++) {
//        for(col = 1; col <= row; col++) 
//			printf("%d ", 2*col);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(col = 1; col <= row; col++) 
//			printf("%d ", 2*col);
//        printf("\n");
//    }
//    return 0;
//}

//15)
//#include <stdio.h>
//int main() {
//    int row, col, n = 3;
//    for(row = 1; row <= n; row++) {
//        for(col = 1; col <= row; col++) 
//		printf("%d ", 2*col - 1);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(col = 1; col <= row; col++) 
//		printf("%d ", 2*col - 1);
//        printf("\n");
//    }
//    return 0;
//}


//16)
//#include <stdio.h>
//int main() {
//    int row, col, n = 5;
//    for(row = 1; row <= n; row++) {
//        for(col = 1; col <= row; col++) {
//            if (col % 2 == 0)
//                printf("- ");
//            else
//                printf("* ");
//        }
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(col = 1; col <= row; col++) {
//            if (col % 2 == 0)
//                printf("- ");
//            else
//                printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//17)
//#include <stdio.h>
//int main() {
//    int row, col, count = 1, n = 5;
//    for(row = 1; row <= n; row++) {
//        for(col = 1; col <= row; col++) 
//		printf("%02d ", count++);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(col = 1; col <= row; col++) 
//		printf("%02d ", count++);
//        printf("\n");
//    }
//    return 0;
//}

//18)
//#include <stdio.h>
//int main() {
//    int row, col, n = 5;
//    for(row = 1; row <= n; row++) {
//        for(col = row; col >= 1; col--) 
//		printf("%d ", col);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(col = row; col >= 1; col--) 
//		printf("%d ", col);
//        printf("\n");
//    }
//    return 0;
//}





///////////////////////////////////////////////////////////////////////////
//1)

//        *
//      * *
//    * * *
//  * * * *
//* * * * *
//  * * * *
//    * * *
//      * *
//        *
//

//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf("  ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//		for(row = 2; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf("  ");
//		}
//		for(col = row; col <= 5; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2)

//#include<stdio.h>
//int main(){
//	int row, col,space , num = 97;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf("  ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//		for(row = 2; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf("  ");
//		}
//		for(col = row; col <= 5; col++){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf("  ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("%d ",col);
//		
//		}
//		printf("\n");
//	}
//		for(row = 2; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf("  ");
//		}
//		for(col = row; col <= 5; col++){
//			printf("%d ",col);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf("  ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("%d ",row);
//		
//		}
//		printf("\n");
//	}
//		for(row = 2; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf("  ");
//		}
//		for(col = row; col <= 5; col++){
//			printf("%d ",row);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6)
//#include<stdio.h>
//int main(){
//	int row, col,space,num = 65;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf("  ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("%c ",num);
//			num++;
//		
//		}
//		printf("\n");
//	}
//		for(row = 2; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf("  ");
//		}
//		for(col = row; col <= 5; col++){
//			printf("%c ",num);
//			num++;
//			
//		}
//		printf("\n");
//	}

//7)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 97; row <= 101; row++){
//		for(space = 100; space >= row; space--){
//			printf("  ");
//		}
//		for(col = 97; col <= row; col++){
//			printf("%c ",col);
//			
//		
//		}
//		printf("\n");
//	}
//		for(row = 98; row <= 101; row++){
//		for(space = 97; space < row; space++){
//			printf("  ");
//		}
//		for(col = row; col <= 101; col++){
//			printf("%c ",col);
//			
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//8)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 97; row <= 101; row++){
//		for(space = 100; space >= row; space--){
//			printf("  ");
//		}
//		for(col = 97; col <= row; col++){
//			printf("%c ",row);
//		}
//		printf("\n");
//	}
//		for(row = 98; row <= 101; row++){
//			for(space = 97; space < row; space++){
//				printf("  ");
//			}
//			for(col = row; col <= 101; col++){
//				printf("%c ",row);
//			}
//		printf("\n");
//	}
//	return 0;
//}

//9)
//#include <stdio.h>
//int main() {
//    int row, col, space, n = 4;
//    for(row = 1; row <= n; row++) {
//        for(space = n - row; space > 0; space--) 
//		printf("  ");
//        for(col = 1; col <= row; col++) 
//		printf("X ");
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = n - row; space > 0; space--) 
//		printf("  ");
//        for(col = 1; col <= row; col++) 
//		printf("X ");
//        printf("\n");
//    }
//    return 0;
//}

//10)
//#include <stdio.h>
//int main() {
//    int row, col, space, n = 4;
//    char ch;
//    for(row = 1; row <= n; row++) {
//        for(space = 1; space <= n - row; space++)
//		printf("  ");
//        ch = 'D';
//        for(col = 1; col <= row; col++) 
//		printf("%c ", ch--);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//		printf("  ");
//        ch = 'D';
//        for(col = 1; col <= row; col++) 
//		printf("%c ", ch--);
//        printf("\n");
//    }
//    return 0;
//}

//11)
//#include <stdio.h>
//int main() {
//    int row, col, space, n = 5, num;
//    for(row = 1; row <= n; row++) {
//        for(space = 1; space <= n - row; space++) 
//		printf("  ");
//        num = 2;
//        for(col = 1; col <= row; col++) {
//            printf("%d ", num);
//            num += 2;
//        }
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//		printf("  ");
//        num = 2;
//        for(col = 1; col <= row; col++) {
//            printf("%d ", num);
//            num += 2;
//        }
//        printf("\n");
//    }
//    return 0;
//}

//12)
//#include <stdio.h>
//int main() {
//    int row, col, space, n = 5;
//    for(row = 1; row <= n; row++) {
//        for(space = 1; space <= n - row; space++) 
//		printf("  ");
//        for(col = row; col >= 1; col--) 
//		printf("%d ", col);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//		printf("  ");
//        for(col = row; col >= 1; col--) 
//		printf("%d ", col);
//        printf("\n");
//    }
//    return 0;
//}

//13)
//#include <stdio.h>
//int main() {
//    int row, col, space, n = 5, val;
//    for(row = 1; row <= n; row++) {
//        for(space = 1; space <= n - row; space++) 
//		printf("  ");
//        val = 1;
//        for(col = 1; col <= row; col++) {
//            printf("%d ", val);
//            val = 1 - val;
//        }
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//		printf("  ");
//        val = 1;
//        for(col = 1; col <= row; col++) {
//            printf("%d ", val);
//            val = 1 - val;
//        }
//        printf("\n");
//    }
//    return 0;
//}

//14)
//#include <stdio.h>
//int main() {
//    int row, col, space, n = 5;
//    for(row = 1; row <= n; row++) {
//        for(space = 1; space <= n - row; space++) 
//			printf("  ");
//        for(col = 1; col <= row; col++) 
//			printf("%d ", row + col - 1);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//			printf("  ");
//        for(col = 1; col <= row; col++) 
//			printf("%d ", row + col - 1);
//        printf("\n");
//    }
//    return 0;
//}

//15)
//#include <stdio.h>
//int main() {
//    int row, col, space, n = 5;
//    char ch;
//    for(row = 1; row <= n; row++) {
//        for(space = 1; space <= n - row; space++) 
//			printf("  ");
//        ch = 'A' + n - row;
//        for(col = 1; col <= row; col++) 
//			printf("%c ", ch++);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//			printf("  ");
//        ch = 'A' + n - row;
//        for(col = 1; col <= row; col++) 
//			printf("%c ", ch++);
//        printf("\n");
//    }
//    return 0;
//}

//16)
//#include <stdio.h>
//int main() {
//    int row, col, space, n = 5;
//    for(row = 1; row <= n; row++) {
//        for(space = 1; space <= n - row; space++) 
//			printf("  ");
//        for(col = 1; col <= row; col++) {
//            if(col % 2 == 0) printf("- ");
//            else printf("* ");
//        }
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//			printf("  ");
//        for(col = 1; col <= row; col++) {
//            if(col % 2 == 0) printf("- ");
//            else printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}



