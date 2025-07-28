//1) 
//#include<stdio.h>
//#include<string.h>
//struct emoployee{
//	int id;
//	char name[50];
//}e1;
//
//int main(){
//	e1.id=101;
//	strcpy(e1.name, "Aadesh More");
//	
//	printf("employee 1 id : %d\n",e1.id);
//	printf("employee 1 name : %s\n", e1.name);
//	return 0;
//}


//2)
//#include<stdio.h>
//#include<string.h>
//struct emoployee{
//	int id;
//	char name[50];
//	float salary;
//}e1,e2;
//
//int main(){
//	e1.id=101;
//	strcpy(e1.name, "Aadesh More");
//	e1.salary = 56000;
//	
//	e2.id=102;
//	strcpy(e2.name, "Savio");
//	e2.salary = 60000;
//	
//	printf("employee 1 id : %d\n",e1.id);
//	printf("employee 1 name : %s\n", e1.name);
//	printf("employee 1 salary : %f\n\n", e1.salary);
//	
//	printf("employee 2 id : %d\n",e2.id);
//	printf("employee 2 name : %s\n", e2.name);
//	printf("employee 2 salary : %f\n",e2.salary);
//	return 0;
//}

//3)
//#include<stdio.h>
//int main (){
//	typedef unsigned int unit;
//	unit i, j;
//	i = 10;
//	j = 20;
//	printf("value of i is : %d\n",i);
//	printf("value od j is : %d\n",j);
//	return 0;
//}

//4)
//#include<stdio.h>
//typedef struct student{
//	char name[50];
//	int age;
//}stud;
//
//int main(){
//	stud s1;
//	printf("Enter the details of student s1 :");
//	printf("\nEnter the name of student : ",s1.name);
//	scanf("%s",&s1.name);    
//	printf("\nEnter the age of student : ",s1.age);
//	scanf("%d",&s1.age);
//	
//	printf("\nname of student : %s ",s1.name);
//	printf("\nage  of student : %d ",s1.age);
//	
//	return 0;
//}

//5)
//#include<stdio.h>
//struct student
//{
//	char name[20];
//	int id;
//	float marks;
//};
//void main(){
//	struct student s1, s2, s3;
//
//	printf("Enter the name id, and marks of student 1 ");
//	scanf("%s %d %f", s1.name, &s1.id, &s1.marks);
//	
//	printf("Enter the name id, and marks of student 2 ");
//	scanf("%s %d %f", s2.name, &s2.id, &s2.marks);
//	
//	printf("Enter the name id, and marks of student 3 ");
//	scanf("%s %d %f", s3.name, &s3.id, &s3.marks);
//	
//	printf("printing the details...\n");
//	printf("%s %d %f\n", s1.name, s1.id, s1.marks);
//	printf("%s %d %f\n", s2.name, s2.id, s2.marks);
//	printf("%s %d %f\n", s3.name, s3.id, s3.marks);
//}


//6)
//#include<stdio.h>
//struct student
//{
//	int rollno;
//	char name[20];	
//};
//int main(){
//	int i;
//	struct student st[5];
//	printf("Enter records of 5 students ");
//	for(i = 0; i < 5; i++){
//		printf("\nEnter rollno : ");
//		scanf("%d",&st[i].rollno);
//		
//		printf("\nEnter name : ");
//		scanf("%s",&st[i].name);
//	}
//	printf("\nstudent information list : ");
//	for(i = 0; i < 5;i++){
//		printf("\n Roll no : %d, Name : %s",st[i].rollno, st[i].name);
//	}
//	return 0;
//}

//7)
//#include<stdio.h>
//struct address{
//	char city[20];
//	int pin;
//	char phone[14];
//};
//struct employee{
//	char name[20];
//	struct address add;
//};
//
//void main(){
//	struct employee emp;
//	printf("Enter Employee Information \n");
//	scanf("%s %s %d %s", &emp.name, &emp.add.city, &emp.add.pin, &emp.add.phone);
//	
//	printf("Printing the Employee Information..... \n");
//	printf("name : %s\ncity : %s\nPincode : %d\nPhone : %s",emp.name, emp.add.city, emp.add.pin, emp.add.phone );
//}

//8)
#include<stdio.h>
#include<string.h>

struct Employee{
	int id;
	char name[20];
	struct Date{
		int dd;
		int mm;
		int yyyy;
	}doj;
}e1;

int main(){
	e1.id = 101;
	strcpy(e1.name, "Aadesh More");
	e1.doj.dd = 9;
	e1.doj.mm = 9;
	e1.doj.yyyy = 2001;
	
	printf("Employee id : %d\n", e1.id);
	printf("Employee name : %s\n", e1.name);
	printf("Employee date of joining : %d/ %d/ %d\n", e1.doj.dd, e1.doj.mm, e1.doj.yyyy);
	return 0;
}
