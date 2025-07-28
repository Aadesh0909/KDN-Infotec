#include<stdio.h>
void main (){
	char s[11] = "javatpoint";
	int i = 0;
	int count = 0;
	while (i < 11)
	 {
	 	if (s[i] == 'a'|| s[i] == 'e'|| s[1] == 'i'|| s[1] == 'o'|| s[1] == 'u')
		 {
	 		count++;
		 }
		i++;
	 }
	printf("%d",count);
}
