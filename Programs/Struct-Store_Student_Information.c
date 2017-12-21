//C Program to Store Information of a Student Using Structure

#include<stdio.h>

struct student
{
	char name[50];
	int roll;
	float marks;
} s;

int main()
{
	printf("\nEnter the details of student");
	
	printf("\n\nEnter Name: ");
	scanf("%s",&s.name);
	
	printf("Enter Roll No: ");
	scanf("%d",&s.roll);
	
	printf("Enter Marks: ");
	scanf("%f",&s.marks);
	
	printf("\nDisplaying Information of Student");
	printf("\n\nName: %s",s.name);
	printf("\nRoll No: %d",s.roll);
	printf("\nMarks: %.2f",s.marks);
	
	return 0;
}
