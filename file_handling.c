//1)

//#include<stdio.h>
//void main(){
//	FILE *fp;
//	char ch;
//	fp = fopen("file_1.txt", "w");
//	fprintf(fp,"hello file by fprintf....\n");
//	fclose(fp);
//}

//2)
//#include<stdio.h>
//void main(){
//	FILE *fp;
//	char buff[225];
//	fp = fopen("file_1.txt", "r");
//	while (fscanf(fp, "%s", buff) != EOF){
//		printf("%s", buff);
//	}
//	fclose(fp);
//}

//3)
//#include<stdio.h>
//void main(){
//	FILE *fptr;
//	int id;
//	char name[30];
//	float salary;
//
//	fptr = fopen("emp.txt","w+");
//	if(fptr == NULL){
//		printf("file does not exist \n");
//		return;
//	}
//	
//	printf("Enter the id \n");
//	scanf("%d",&id);
//	fprintf(fptr, "id = %d\n",id);
//	
//	printf("Enter the name \n");
//	scanf("%s",&name);
//	fprintf(fptr, "name = %s\n",name);
//	
//	printf("Enter the salary \n");
//	scanf("%f",&salary);
//	fprintf(fptr, "salary = %.2f\n",salary);
//	fclose(fptr);
//}

//4)
//#include<stdio.h>
//void main(){
//	FILE *fp;
//	char ch;
//	fp = fopen("file_2.txt", "w");
//	fputc('a',fp);
//	fclose(fp);
//}

//5)
//#include<stdio.h>
//void main(){
//	FILE *fp;
//	char c;
//	fp = fopen("file_2.txt", "r");
//	while ((c = fgetc(fp)) != EOF){
//		printf("%c", c);
//	}
//	fclose(fp);
//}

//6)
//#include<stdio.h>
//#include<conio.h>
//void main(){
//	FILE *pf;
//	pf = fopen("file_2.txt","w");
//	fputs("hello c programming",pf);
//	
//	fclose(pf);
//	
//}

//7)
//#include<stdio.h>
//#include<conio.h>
//void main(){
//	FILE *fp;
//	char text[300];
//	
//	fp = fopen("file_2.txt", "r");
//	printf("%s", fgets(text,200,fp));
//	
//	fclose(fp);
//}

//8)
//#include<stdio.h>
//#include<conio.h>
//void main(){
//	
//}
