//Pattern programs...........

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// 1)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= 5; col++){
//			printf(" *");
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 2)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= 5; col++){
//			printf(" 1");
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 3)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= 5; col++){
//			printf(" %d",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 4)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= 5; col++){
//			printf(" %d",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 5)
 // a = 97 A = 65
//#include<stdio.h>
//int main(){
//	int row = 97, col;
//	for(row; row <= 101; row++){
//		for(col = 1; col <= 5; col++){
//			printf(" %c",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 6)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col= 97; col <= 101; col++){
//			printf(" %c",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 7) 
//#include<stdio.h>
//int main(){
//	int row = 65, col;
//	for(row; row <= 69; row++){
//		for(col = 1; col <= 5; col++){
//			printf(" %c",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 8)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 65; col <= 69; col++){
//			printf(" %c",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 9)
//#include<stdio.h>
//int main(){
//	int row , col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= 5; col++){
//			if(row % 2 != 0){
//				printf(" #");
//			}else{
//				printf(" @");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 10)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++)
//	{
//		for(col = 1; col <= 5; col++)
//		{
//			if(row == 1 || col == 1 || col == 5 || row == 5)
//			{
//			printf("* ");
//		    }
//		   else
//		    {
//			 printf("  ");
//	    	}
//		
//	}
//	printf("\n");
//}
//	return 0;
//}

// 11)
//#include<stdio.h>
//int main(){
//	int row, col, num = 1;
//	for(row = 1; row <= 4; row++){
//		for(col = 1; col <= 4; col++){
//			printf("%d\t" ,num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 12)
//#include<stdio.h>
//int main(){
//	int row, col, num = 97;
//	for(row = 1; row <= 4; row++){
//		for(col = 1; col <= 4; col++){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 13)
//#include<stdio.h>
//int main(){
//	int row, col, num = 65;
//	for(row = 1; row <= 4; row++){
//		for(col = 1; col <= 4; col++){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//////////////////////////////////////////////////
//right halp pyramid
 
// 1) 
//*
//* *
//* * *
//* * * *
//* * * * *

// #include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 2)
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5

// #include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("%d ",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 3)
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

// #include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("%d ",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 4)
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15

// #include<stdio.h>
//int main(){
//	int row, col, num = 1;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			printf("%d ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 5)
//A
//B B
//C C C
//D D D D
//E E E E E

// #include<stdio.h>
//int main(){
//	int row = 65, col;
//	for(row = 65; row <= 69; row++){
//		for(col = 65; col <= row ; col++){
//			printf("%c ",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 6)
//A
//A B
//A B C
//A B C D
//A B C D E

// #include<stdio.h>
//int main(){
//	int row = 65, col;
//	for(row = 65; row <= 69; row++){
//		for(col = 65; col <= row ; col++){
//			printf("%c ",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 7)
//A
//B C
//D E F
//G H I J
//K L M N O

// #include<stdio.h>
//int main(){
//	int row, col, num = 65;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row ; col++){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 8)
//a
//b b
//c c c
//d d d d
//e e e e e

// #include<stdio.h>
//int main(){
//	int row , col;
//	for(row = 97; row <= 101; row++){
//		for(col = 97; col <= row ; col++){
//			printf("%c ",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 9)
//a
//a b
//a b c
//a b c d
//a b c d e

// #include<stdio.h>
//int main(){
//	int row , col;
//	for(row = 97; row <= 101; row++){
//		for(col = 97; col <= row ; col++){
//			printf("%c ",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//10)
//a
//b c
//d e f
//g h i j
//k l m n o

// #include<stdio.h>
//int main(){
//	int row, col, num = 97;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row ; col++){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}


//11)

// #include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row ; col++){
//			if(row == 5 || col == 1 || col == row){
//				printf("* ");
//			}else{
//				printf("  ");
//			}		
//		}
//		printf("\n");
//	}
//	return 0;
//}

//12)
// #include<stdio.h>
//int main(){
//	int row, col , num = 15;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row ; col++){
//			
//				printf("%d ", num);
//				num--;
//					
//		}
//		printf("\n");
//	}
//	return 0;
//}

//13)

// #include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row ; col++){
//			if(row % 2 != 0){
//				printf("* ");
//			}
//			else{
//				printf("%d ", col);
//			}		
//		}
//		printf("\n");
//	}
//	return 0;
//}

//14)

// #include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row ; col++){
//			if(row % 2 != 0){
//				printf("@ ");
//			}
//			else{
//				printf("# ");
//			}		
//		}
//		printf("\n");
//	}
//	return 0;
//}

//15)

// #include<stdio.h>
//int main(){
//	int row, col, num = 2;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row ; col++){
//			if(row % 2 == 0){
//				printf("%d ", num);
//				num++;
//			}
//			else{
//				printf("* ");
//				//num++;
//			}		
//		}
//		printf("\n");
//		//num++;
//	}
//	return 0;
//}


//16)
//1
//1 3
//1 3 5
//1 3 5 7
//1 3 5 7 9
//#include <stdio.h>
//int main() {
//    int row, col, num;
//    for(row = 1; row <= 5; row++) {
//        num = 1;
//        for(col = 1; col <= row; col++) {
//            printf("%d ", num);
//            num += 2;
//        }
//        printf("\n");
//    }
//    return 0;
//}

//17)
//*
//
//* * *
//
//* * * * *
//
//
//#include<stdio.h>
//int main (){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			if(row % 2 == 1){
//				printf("* ");
//			}
//			else{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}

//18)
//*
//*
//*   *
//*   *
//*   *   *
//
//#include<stdio.h>
//int main (){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			if(col % 2 == 1){
//				printf("* ");
//			}
//			else{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}

//19)
//E
//E D
//E D C
//E D C B
//E D C B A
//
//#include <stdio.h>
//
//int main() {
//    int row, col;
//    char ch;
//    for(row = 1; row <= 5; row++) {
//        ch = 'E';
//        for(col = 1; col <= row; col++) {
//            printf("%c ", ch--);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//20)

//#include <stdio.h>
//int main() {
//    int row, col, num;
//    for(row = 1; row <= 5; row++) {
//        num = 2;
//        for(col = 1; col <= row; col++) {
//            printf("%d ", num);
//            num += 2;
//        }
//        printf("\n");
//    }
//    return 0;
//}


//21)
//1
//2 *
//3 * 4
//5 * 6 *
//7 * 8 * 9
//
//#include<stdio.h>
//int main (){
//	int row, col,num=1;
//	for(row = 1; row <= 5; row++){
//		for(col = 1; col <= row; col++){
//			if(col % 2 == 1){
//				printf("%d ",num);
//				num++;
//			}
//			else{
//				printf("* ");
//			}
//		}
//		printf("\n");
//	}
//}
//////////////////////////////////////////////////////////

// Pattern 4
/*

    *
   **
  ***
 ****
*****

*/
// 1)

//#include<stdio.h>
//int main() {
//	int row, col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf("  ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//2)
//#include<stdio.h>
//int main () {
//	int row, col, num=1, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(col%2!=0){
//			printf("%d",num);
//			num++;
//		}
//		else {
//			printf("*");
//		}
//		}
//		printf("\n");
//	}
//}

//3)
//#include<stdio.h>
//int main () {
//	int row, col, num=2, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row%2==0){
//			printf("%d",num);
//			num++;
//		}
//		else {
//			printf("*");
//		}
//		}
//		printf("\n");
//	}
//}

//4)
//#include<stdio.h>
//int main () {
//	int row, col, num=1, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}	
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row%2!=0){
//			printf("%d",num);
//			num++;
//		}
//		else {
//			printf("*");
//		}
//		}
//		printf("\n");
//	}
//}

//5)
//#include<stdio.h>
//int main () {
//	int row, col, num=1,space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row%2!=0){
//			printf("%d",num);
//		}
//		else {
//			printf("*");
//		}
//		}
//		printf("\n");
//		num++;
//	}
//}

//6)
//#include<stdio.h>
//int main () {
//	int row, col,space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			printf("%d", row);
//		}
//		printf("\n");
//	}
//}

//7)
//#include<stdio.h>
//int main () {
//	char row, col, num=15, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row%2!=0){
//			printf("*");
//		}
//		else {
//			printf("%d", col);
//		}
//		}
//		printf("\n");
//	}
//}

//8)
//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row==5 || col==1 || row==col)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}


//10)
//#include<stdio.h>
//int main () {
//	char row, col, x=97, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			printf("%c", x);
//			x++;
//			
//		}
//		printf("\n");
//	}
//}

//11)
//#include<stdio.h>
//int main () {
//	char row, col, x='a', space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			printf("%c", x);
//			x++;
//			
//		}
//		printf("\n");
//	}
//}

//12)
//#include<stdio.h>
//int main () {
//	char row, col, x='A', space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			printf("%c", x);
//			x++;
//			
//		}
//		printf("\n");
//	}
//}

//13)
//#include<stdio.h>
//int main () {
//	char row, col, space;
//	for(row='a' ; row<='e' ; row++)
//	{
//		for(space='d' ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col='a' ; col<=row ; col++)
//		{
//			printf("%c", col);
//		}
//		printf("\n");
//	}
//}

//14)
//#include<stdio.h>
//int main () {
//	char row, col, space;
//	for(row='A' ; row<='E' ; row++)
//	{
//		for(space='D' ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col='A' ; col<=row ; col++)
//		{
//			printf("%c", col);
//		}
//		printf("\n");
//	}
//}

//15)
//#include<stdio.h>
//int main () {
//	char row, col, x=65, space;
//	for(row= 1 ; row<= 5 ; row++)
//	{
//		for(space= 4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col= 1 ; col<=row ; col++)
//		{
//			printf("%c", x);
//			x++;
//			
//		}
//		printf("\n");
//	}
//}

//16)
//#include<stdio.h>
//int main () {
//	char row, col, x='a', space;
//	for(row= 1 ; row<= 5 ; row++)
//	{
//		for(space= 4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col= 1 ; col<=row ; col++)
//		{
//			printf("%c", x);
//			x++;
//			
//		}
//		printf("\n");
//	}
//}

//17)
//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row==5 || col==1 || row==col)
//			{
//				printf("~");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}

//18)
//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row==5 || col==1 || row==col)
//			{
//				printf("?");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}


///////////////////////////////////////////////////
// 
//* * * * *
//* * * *
//* * *
//* *
//*
//1)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
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
//		for(col = 5; col >= row; col--){
//			printf("%d ",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			printf("%d ",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//4)
//#include<stdio.h>
//int main(){
//	int row, col,num=1;
//	for(row = 1; row <= 5; row++){
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
//	int row, col;
//	for(row = 65; row <= 69; row++){
//		for(col = 69; col >= row; col--){
//			printf("%c ",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 65; row <= 69; row++){
//		for(col = 69; col >= row; col--){
//			printf("%c ",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//7)
//#include<stdio.h>
//int main(){
//	int row, col , num = 65;
//	for(row = 65; row <= 69; row++){
//		for(col = 69; col >= row; col--){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//8)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 97; row <= 101; row++){
//		for(col = 101; col >= row; col--){
//			printf("%c ",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//9)
//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 97; row <= 101; row++){
//		for(col = 101; col >= row; col--){
//			printf("%c ",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//10)
//#include<stdio.h>
//int main(){
//	int row, col , num = 97;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			printf("%c ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//11)
//#include<stdio.h>
//int main(){
//	int row, col ;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//		if(col == 5 || row == 1 || col == row){
//			printf("* ");
//			}else
//			{
//			printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//12)
//#include<stdio.h>
//int main(){
//	int row, col, num = 15;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			printf("%d ", num);
//			num--;
//		}
//		printf("\n");
//	}
//	return 0;
//}


//13)

//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			if(row % 2 ==1){
//				printf("* ");
//			}
//			else
//			{
//				printf("%d ",col);
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//14)

//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			if(row % 2 ==1){
//				printf("@ ");
//			}
//			else
//			{
//				printf("# ");
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//15)

//#include<stdio.h>
//int main(){
//	int row, col;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			if(row % 2 ==1){
//				printf("* ");
//			}
//			else
//			{
//			printf("  ");	
//			}	
//		}
//		printf("\n");
//	}
//	return 0;
//}

//16)
//#include<stdio.h>
//int main(){
//	int row, col , ch = 65;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			printf("%c ",ch);
//			ch++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//17)
//#include<stdio.h>
//int main(){
//	int row, col,num = 1;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row; col--){
//			if(row % 2 ==1){
//				printf("* ");
//			}
//			else
//			{
//			printf("%d ",num);	
//			num++;
//			}	
//		}
//		printf("\n");
//	}
//	return 0;
//}

//18)
// #include<stdio.h>
//int main(){
//	int row, col, num = 2;
//	for(row = 1; row <= 5; row++){
//		for(col = 5; col >= row ; col--){
//			if(row % 2 == 0){
//				printf("%d ", num);
//				num++;
//			}
//			else{
//				printf("* ");
//				//num++;
//			}		
//		}
//		printf("\n");
//		//num++;
//	}
//	return 0;
//}

//////////////////////////////////////////////////////////////////

//    *
//   * *
//  * * *
// * * * *
//* * * * *


//1)

//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf(" ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	
//	
//	return 0;
//}


//2)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf(" ");
//		}
//		for(col = 1; col <= row; col++){
//			if(col % 2 == 0){
//				printf("* ");
//			}else{
//				printf("%d ",col);
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3)
//#include<stdio.h>
//int main () {
//	int row, col, num=1, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(col%2!=0){
//			printf("%d ",num);
//			num++;
//		}
//		else {
//			printf("* ");
//		}
//		}
//		printf("\n");
//	}
//}

//4)
//#include<stdio.h>
//int main () {
//	int row, col, num=2, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row%2==0){
//			printf("%d ",num);
//			num++;
//		}
//		else {
//			printf("* ");
//		}
//		}
//		printf("\n");
//	}
//}


//5)
//#include<stdio.h>
//int main () {
//	char row, col, num=15, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row%2!=0){
//			printf("* ");
//		}
//		else {
//			printf("%d ", col);
//		}
//		}
//		printf("\n");
//	}
//}

//6)
//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row==5 || col==1 || row==col)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}

//7)

//#include<stdio.h>
//int main () {
//	char row, col, x='a', space;
//	for(row='a' ; row<='e' ; row++)
//	{
//		for(space='d' ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col='a' ; col<=row ; col++)
//		{
//			printf("%c ", x);
//			x++;
//			
//		}
//		printf("\n");
//	}
//}

//8)
//#include<stdio.h>
//int main () {
//	char row, col, x='A', space;
//	for(row='A' ; row<='E' ; row++)
//	{
//		for(space='D' ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col='A' ; col<=row ; col++)
//		{
//			printf("%c ", x);
//			x++;
//			
//		}
//		printf("\n");
//	}
//}

//9)

//#include<stdio.h>
//int main () {
//	char row, col, space;
//	for(row='a' ; row<='e' ; row++)
//	{
//		for(space='d' ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col='a' ; col<=row ; col++)
//		{
//			printf("%c ", col);
//		}
//		printf("\n");
//	}
//}


//10)

//#include<stdio.h>
//int main () {
//	char row, col, space;
//	for(row='A' ; row<='E' ; row++)
//	{
//		for(space='D' ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col='A' ; col<=row ; col++)
//		{
//			printf("%c ", col);
//		}
//		printf("\n");
//	}
//}

//11)

//#include<stdio.h>
//int main () {
//	char row, col, x=65, space;
//	for(row=65 ; row<=69 ; row++)
//	{
//		for(space=68 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=65 ; col<=row ; col++)
//		{
//			printf("%c ", x);
//			x++;
//			
//		}
//		printf("\n");
//	}
//} 

//12)

//#include<stdio.h>
//int main () {
//	char row, col, x='a', space;
//	for(row='a' ; row<='e' ; row++)
//	{
//		for(space='d' ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col='a' ; col<=row ; col++)
//		{
//			printf("%c ", x);
//			x++;
//			
//		}
//		printf("\n");
//	}
//}

//13)

//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row==5 || col==1 || row==col)
//			{
//				printf("~ ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}

//14)

//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row==5 || col==1 || row==col)
//			{
//				printf("? ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}

//15)
//#include<stdio.h>
//int main() {
//	int row , col, space, num=1;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			printf("%d ",num);
//			num++;
//		}
//		printf("\n");
//	}
//}

//16)
//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row % 2 == 0){
//				printf("  ");
//			}
//			else{
//				printf("# ");
//			}
//		}
//		printf("\n");
//	}
//}


//17)

//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row % 2 == 0){
//				printf("$ ");
//			}
//			else{
//				printf("# ");
//			}
//		}
//		printf("\n");
//	}
//}

//18)
//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row==5 || col==1 || row==col)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("$ ");
//			}
//		}
//		printf("\n");
//	}
//}

//19)
//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=4 ; space>=row ; space--)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=row ; col++)
//		{
//			if(row==5 || col==1 || row==col)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("$ ");
//			}
//		}
//		printf("\n");
//	}
//}


////////////////////////////////////////////////////////


//* * * * *
// * * * *
//  * * *
//   * *
//    *


//1)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf(" ");
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
//	int row, col,space;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 5; col++){
//			printf("%d ",col);
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
//		for(space = 1; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 5; col++){
//			printf("%d ",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//4)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 97; row <=101; row++){
//		for(space = 97; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 101; col++){
//			printf("%c ",col);
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
//	for(row = 97; row <=101; row++){
//		for(space = 97; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 101; col++){
//			printf("%c ",row);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 65; row <=69; row++){
//		for(space = 65; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 69; col++){
//			printf("%c ",col);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//7)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 65; row <=69; row++){
//		for(space = 65; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 69; col++){
//			printf("%c ",row);
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
//	for(row = 65; row <=69; row++){
//		for(space = 65; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 69; col++){
//			if(col % 2 == 1){
//				printf("%c ",col);	
//			}
//			else{
//				printf("  ");
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//9)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 65; row <=69; row++){
//		for(space = 65; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 69; col++){
//			if(row % 2 == 1){
//				printf("%c ",row);	
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
//	int row, col,space;
//	 
//	for(row = 1; row <=5; row++){
//		for(space = 1; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 5; col++){
//			if(row == 1 || col == row || col == 5){
//				printf("* ");	
//			}
//			else{
//				printf("  ");
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 11)
//#include<stdio.h>
//int main(){
//	int row, col,space,num = 1;
//	 
//	for(row = 1; row <= 3; row++){
//		for(space = 1; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 3; col++){
//			printf("%d ",num);
//			num++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//12)
//#include<stdio.h>
//int main () {
//	int row, col, num=1, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=1 ; space<row ; space++)
//		{
//			printf(" ");
//		}	
//		for(col=1 ; col<=6-row ; col++)
//		{
//			if(row%2!=0){
//			printf("%d ",num);
//			num++;
//		}
//		else {
//			printf("* ");
//		}
//		}
//		printf("\n");
//	}
//}

//13)
//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=1 ; space<row ; space++)
//		{
//			printf(" ");
//		}
//		for(col=row ; col<=5 ; col++)
//		{
//			if(row==1 || col==5 || row==col)
//			{
//				printf("- ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}

//14)
//#include<stdio.h>
//int main() {
//	int row , col, space;
//	for(row=1 ; row<=10 ; row++)
//	{
//		for(space=1 ; space<row ; space++)
//		{
//			printf(" ");
//		}
//		for(col=row ; col<=10 ; col++)
//		{
//			if(row==1 || col==10 || row==col)
//			{
//				printf("- ");
//			}
//			else
//			{
//				printf("$ ");
//			}
//		}
//		printf("\n");
//	}
//}

//15)
//#include<stdio.h>
//int main () {
//	int row, col, num=2, space;
//	for(row=1 ; row<=5 ; row++)
//	{
//		for(space=1 ; space<row ; space++)
//		{
//			printf(" ");
//		}
//		for(col=1 ; col<=6-row ; col++)
//		{
//			if(row%2==0){
//			printf("%d ",num);
//			num++;
//		}
//		else {
//			printf("* ");
//		}
//		}
//		printf("\n");
//	}
//}
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

//19)
/*#include <stdio.h>
int main() {
    int row, col, n = 4;
    for(row = 1; row <= n; row++) {
        for(col = 1; col <= row; col++)
            printf("%d ", (row+col)%2);
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(col = 1; col <= row; col++)
            printf("%d ", (row+col)%2);
        printf("\n");
    }
    return 0;
}
*/

//20)

/*#include <stdio.h>
int main() {
    int row, col, n = 5;
    for(row = 1; row <= n; row++) {
        for(col = 1; col <= row; col++) 
			printf("%d ", 2*col);
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(col = 1; col <= row; col++) 
			printf("%d ", 2*col);
        printf("\n");
    }
    return 0;
}
*



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

//17)
/*#include <stdio.h>
int main() {
    int row, col, space, n = 5;
    for(row = 1; row <= n; row++) {
        for(space = 1; space <= n - row; space++) 
			printf("  ");
        for(col = 1; col <= row; col++) {
            if(col % 2 == 0) printf("- ");
            else printf("* ");
        }
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(space = 1; space <= n - row; space++) 
			printf("  ");
        for(col = 1; col <= row; col++) {
            if(col % 2 == 0) printf("- ");
            else printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/

//18)

/*#include <stdio.h>
int main() {
    int row, col, space, n = 4;
    for(row = 1; row <= n; row++) {
        for(space = n - row; space > 0; space--) 
		printf(" ");
        for(col = 1; col <= row; col++) 
		printf("*");
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(space = n - row; space > 0; space--) 
		printf(" ");
        for(col = 1; col <= row; col++) 
		printf("0");
        printf("\n");
    }
    return 0;
}
*/

//19)

/*#include <stdio.h>
int main() {
    int row, col, space, n = 4;
    for(row = 1; row <= n; row++) {
        for(space = n - row; space > 0; space--) 
		printf(" ");
        for(col = 1; col <= row; col++) 
		printf("1");
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(space = n - row; space > 0; space--) 
		printf(" ");
        for(col = 1; col <= row; col++) 
		printf("0");
        printf("\n");
    }
    return 0;
}

*/

// 20)

/*#include <stdio.h>
int main() {
    int row, col, space, n = 5;
    for(row = 1; row <= n; row++) {
        for(space = 1; space <= n - row; space++) 
		printf(" ");
        for(col = row; col >= 1; col--) 
		printf("%d", col);
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(space = 1; space <= n - row; space++) 
		printf(" ");
        for(col = row; col >= 1; col--) 
		printf("%d", col);
        printf("\n");
    }
    return 0;
}
*/








//////////////////////////////////////////////////////////////////////////

//    *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *


//1)
//#include<stdio.h>
//int main(){
//	int row, col,space;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf(" ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//		for(row = 2; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf(" ");
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
//	int row, col,space;
//	 
//	for(row = 1; row <= 5; row++){
//		for(space = 4; space >= row; space--){
//			printf(" ");
//		}
//		for(col = 1; col <= row; col++){
//			if(col % 2 == 0){
//				printf("* ");
//			}else{
//				printf("%d ",col);
//			}
//			
//		}
//		printf("\n");
//	}
//		for(row = 2; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf(" ");
//		}
//		for(col = row; col <= 5; col++){
//				if(col % 2 == 0){
//				printf("* ");
//			}else{
//				printf("%d ",col);
//			}
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
//			printf(" ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("%d ",col);
//		
//		}
//		printf("\n");
//	}
//		for(row = 2; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf(" ");
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
//			printf(" ");
//		}
//		for(col = 1; col <= row; col++){
//			printf("%d ",row);
//		
//		}
//		printf("\n");
//	}
//		for(row = 2; row <= 5; row++){
//		for(space = 1; space < row; space++){
//			printf(" ");
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
//			printf(" ");
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
//			printf(" ");
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
//			printf(" ");
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
//			printf(" ");
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
//			printf(" ");
//		}
//		for(col = 97; col <= row; col++){
//			printf("%c ",row);
//		}
//		printf("\n");
//	}
//		for(row = 98; row <= 101; row++){
//			for(space = 97; space < row; space++){
//				printf(" ");
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
//		printf(" ");
//        for(col = 1; col <= row; col++) 
//		printf("X ");
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = n - row; space > 0; space--) 
//		printf(" ");
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
//		printf(" ");
//        ch = 'D';
//        for(col = 1; col <= row; col++) 
//		printf("%c ", ch--);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//		printf(" ");
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
//		printf(" ");
//        num = 2;
//        for(col = 1; col <= row; col++) {
//            printf("%d ", num);
//            num += 2;
//        }
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//		printf(" ");
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
//		printf(" ");
//        for(col = row; col >= 1; col--) 
//		printf("%d ", col);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//		printf(" ");
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
//		printf(" ");
//        val = 1;
//        for(col = 1; col <= row; col++) {
//            printf("%d ", val);
//            val = 1 - val;
//        }
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//		printf(" ");
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
//			printf(" ");
//        for(col = 1; col <= row; col++) 
//			printf("%d ", row + col - 1);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//			printf(" ");
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
//			printf(" ");
//        ch = 'A' + n - row;
//        for(col = 1; col <= row; col++) 
//			printf("%c ", ch++);
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//			printf(" ");
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
//			printf(" ");
//        for(col = 1; col <= row; col++) {
//            if(col % 2 == 0) printf("- ");
//            else printf("* ");
//        }
//        printf("\n");
//    }
//    for(row = n - 1; row >= 1; row--) {
//        for(space = 1; space <= n - row; space++) 
//			printf(" ");
//        for(col = 1; col <= row; col++) {
//            if(col % 2 == 0) printf("- ");
//            else printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//17)
/*#include <stdio.h>
int main() {
    int row, col, space, n = 5;
    for(row = 1; row <= n; row++) {
        for(space = 1; space <= n - row; space++) 
			printf("  ");
        for(col = 1; col <= row; col++) {
            if(col % 2 == 0) printf("- ");
            else printf("* ");
        }
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(space = 1; space <= n - row; space++) 
			printf("  ");
        for(col = 1; col <= row; col++) {
            if(col % 2 == 0) printf("- ");
            else printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/

// 18)

/*#include <stdio.h>
int main() {
    int row, col, space, n = 4;
    for(row = 1; row <= n; row++) {
        for(space = n - row; space > 0; space--) 
		printf(" ");
        for(col = 1; col <= row; col++) 
		printf("*");
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(space = n - row; space > 0; space--) 
		printf(" ");
        for(col = 1; col <= row; col++) 
		printf("0");
        printf("\n");
    }
    return 0;
}
*/

//19)

/*#include <stdio.h>
int main() {
    int row, col, space, n = 4;
    for(row = 1; row <= n; row++) {
        for(space = n - row; space > 0; space--) 
		printf(" ");
        for(col = 1; col <= row; col++) 
		printf("1");
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(space = n - row; space > 0; space--) 
		printf(" ");
        for(col = 1; col <= row; col++) 
		printf("0");
        printf("\n");
    }
    return 0;
}

*/

// 20)

/*#include <stdio.h>
int main() {
    int row, col, space, n = 5;
    for(row = 1; row <= n; row++) {
        for(space = 1; space <= n - row; space++) 
		printf(" ");
        for(col = row; col >= 1; col--) 
		printf("%d", col);
        printf("\n");
    }
    for(row = n - 1; row >= 1; row--) {
        for(space = 1; space <= n - row; space++) 
		printf(" ");
        for(col = row; col >= 1; col--) 
		printf("%d", col);
        printf("\n");
    }
    return 0;
}
*/

////////////////////////////////////////////////////////

