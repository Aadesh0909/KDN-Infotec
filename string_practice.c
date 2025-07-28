//1)Write a program to print a string entered by user.
//#include<stdio.h>
//int main (){
//	char str[50];
//	printf("Enter your string : ");
//	gets(str);
//	printf("Your string : %s",str);
//	return 0;
//}

//2)Write a program to print every character of a string entered by user in a new line using loop.
//#include<stdio.h>
//#include<string.h>
//int main (){
//	char str[50];
//	int i;
//	printf("Enter your string : ");
//	gets(str);
//	for (i = 0; str[i] != '\0'; i++){
//		printf("%c\n",str[i]);
//	}
//}

//3)write a program to find the length of the string "refrigerator".
//#include<stdio.h>
//#include<string.h>
//int main (){
//	char str[50];
//	int i, count = 0;
//	printf("Enter your string : ");
//	gets(str);
//	for (i = 0; str[i] != '\0'; i++){
//		count = count +1;	
//	}
//	printf("%d\n",count);
//}

//4)Write a program to enter a string s1 and copy it to another string s2.
//#include<stdio.h>
//#include<string.h>
//int main (){
//	char str[50], str2[50];
//	
//	int i, count = 0;
//	printf("Enter your string : ");
//	gets(str);
//	for (i = 0; str[i] != '\0'; i++){
//		str2[i] = str[i];
//			
//	}
//	printf("second string is : %s\n",str2);
//}

//4)Write a program to compare if the two strings entered by user are equal or not without using predefined String functions.?
//#include<stdio.h>
//#include<string.h>
//int main (){
//	char str[50], str2[50];
//	int i, count = 0, count2 = 0;
//	printf("Enter your 1st string : ");
//	gets(str);
//	
//	printf("Enter your 2nd string : ");
//	gets(str2);
//	for (i = 0; str[i] != '\0'; i++){
//		count = count +1;	
//	}
//	
//		for (i = 0; str2[i] != '\0'; i++){
//		count2 = count2 +1;	
//	}
//	
//	if(count == count2){
//		printf("Two strings are equal");
//	}
//	else{
//		printf("two strings are not equal");
//	}
//	
//}

//5)


//6)

#include <stdio.h>

int main() {
    char str[] = "Hello, Worldo";
    int i = 0;
    int first_o = -1, last_o = -1;
    int first_comma = -1, last_comma = -1;

    // Loop through the string
    while (str[i] != '\0') {
        // Check for 'o'
        if (str[i] == 'o') {
            if (first_o == -1) {
                first_o = i;
            }
            last_o = i;
        }

        // Check for ','
        if (str[i] == ',') {
            if (first_comma == -1) {
                first_comma = i;
            }
            last_comma = i;
        }

        i++;
    }

    // Print results
    if (first_o != -1) {
        printf("First occurrence of 'o' is at index: %d\n", first_o);
        printf("Last occurrence of 'o' is at index: %d\n", last_o);
    } else {
        printf("'o' not found in the string.\n");
    }

    if (first_comma != -1) {
        printf("First occurrence of ',' is at index: %d\n", first_comma);
        printf("Last occurrence of ',' is at index: %d\n", last_comma);
    } else {
        printf("',' not found in the string.\n");
    }

    return 0;
}



