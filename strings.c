//1)
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char ch[11] = {'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
//	char ch1[11] = "javatpoint";
//	
//	printf("Char array value is : %s\n",ch);
//	printf("String literal value is : %s\n",ch1);
//	return 0;
//}

//2)
//#include<stdio.h>
//void main (){
//	char s[11] = "aadesh";
//	int i = 0;
//	int count = 0;
//	while (i < 11)
//	 {
//	 	if (s[i] == 'a'|| s[i] == 'e'|| s[1] == 'i'|| s[1] == 'o'|| s[1] == 'u')
//		 {
//	 		count++;
//		 }
//		i++;
//	 }
//	printf("%d",count);
//}

//3)
//#include<stdio.h>
//int main (){
//	char s[11] = "aadesh";
//	int i = 0;
//	int count = 0;
//	while(s[i] != '\0')
//	 {
//	 	if (s[i] == 'a'|| s[i] == 'e'|| s[1] == 'i'|| s[1] == 'o'|| s[1] == 'u')
//		 {
//	 		count++;
//		 }
//		i++;
//	 }
//	printf(" count is : %d",count);
//	return 0;
//}

//4)
//#include<stdio.h>
//void main(){
//	char s[20];
//	printf("Enter the String : ");
//	scanf("%s",s);
//	
//	printf("Your string : %s",s);
//}

//5)
//#include<stdio.h>
//void main(){
//	char s[20];
//	printf("Enter the String : ");
//	scanf("%[^\n]s",s);
//	
//	printf("Your string :%s",s);
//}

//6)
//#include<stdio.h>
//void main(){
//	char s[11] = "javatpoint";
//	char *p = s;
//	printf("%s",p);
//}

//7)
//#include<stdio.h>
//void main(){
//	char *p = " hello javatpoint";
//	printf("String p : %s\n",p);
//	char *q;
//	printf("Copying the content of p in q...\n");
//	q = p;
//	 printf("string q : %s",q);
//}

//8)
//#include<stdio.h>
//void main(){
//	char *p = "hello javatpoint";
//	printf("Before Assigning : %s\n",p);
//	p = "hello";
//	printf("After Assigning : %s",p);
//}

//9)
//#include<stdio.h>
//int main(){
//	char s[30];
//	printf("Enter any string : ");
//	scanf("%s",s);
//	printf("Your string : %s",s);
//}


//10)gets()
//#include<stdio.h>
//int main(){
//	char s[30];
//	puts("Enter any string : ");
//	gets(s);
//	puts(s);
//}

//11)
//#include<stdio.h>
//int main(){
//	char str[20];
//	printf("Enter any string : ");
//	fgets(str, 20, stdin);
//	printf("Your string : %s", str);
//}

//12)gets() puts()
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char name[50];
//	printf("Enter your name : ");
//	gets(name);
//	printf("Your name is : ");
//	puts(name);
//	return 0;
//}

//13)lenngth of string
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char ch[20] = "javatpoint";
//	printf("Length of string is : %d",strlen(ch));
//	return 0;
//}

//14)copy the string
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char ch[20] = "javatpoint";
//	char ch2[20];
//	strcpy(ch2,ch);
//	printf("value of second string is : %s",ch2);
//	return 0;
//}

//15)string concatination
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char ch[20] = "hello ";
//	char ch2[20] = "c";
//	strcat(ch,ch2);
//	printf("value of second string is : %s",ch);
//	return 0;
//}

//16)compair strings
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str1[20], str2[20];
//	printf("Enter 1st string : ");
//	gets(str1);
//	
//	printf("Enter 2nd string : ");
//	gets(str2);
//	
//	if(strcmp(str1,str2) == 0){
//		printf("Strings are equal");
//	}
//	else{
//		printf("Strings are not equal");
//	}
//	return 0;
//}

//17)reverse the string

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str1[20];
//	printf("Enter 1st string : ");
//	gets(str1);
//	
//	printf("string is : %s",str1);
//	printf("\nReverse string is : %s",strrev(str1));
//	return 0;
//}

//18) lowercase string
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str1[20];
//	printf("Enter 1st string : ");
//	gets(str1);
//	
//	printf("string is : %s",str1);
//	printf("\nLower string is : %s",strlwr(str1));
//	return 0;
//}


//19)Uppercase string
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str1[20];
//	printf("Enter 1st string : ");
//	gets(str1);
//	
//	printf("string is : %s",str1);
//	printf("\nLower string is : %s",strupr(str1));
//	return 0;
//}

//20)
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str1[100] = "this is javatpoint with c and java";
//	char *sub;
//	sub = strstr(str1,"java");
//	
//	printf("sub string is : %s",sub);
//	return 0;
//}

//21)maths functions
#include<stdio.h>
#include<math.h>
int main(){
	printf("\n%f",ceil(3.6));
	printf("\n%f",ceil(3.3));
	printf("\n%f",floor(3.6));
	printf("\n%f",floor(3.4));
	printf("\n%f",sqrt(16));
	printf("\n%f",sqrt(7));
	printf("\n%f",pow(2,4));
	printf("\n%f",pow(3,3));
	printf("\n%d",abs(-12));
}

