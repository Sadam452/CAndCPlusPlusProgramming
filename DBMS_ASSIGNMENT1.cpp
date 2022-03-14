#include<stdio.h>
#include<stdlib.h>
#include<string>
#define size 60
int num=0;
struct student 
{
	char name[20];
	int roll_no;
	float cgpa;
	float percentage;
	int age;
	int semester;
}s[size],z;
void insert()
{
	printf("How many records do u want to insert?");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		printf("RECORD OF STUDENT NUMBER %d\n",i+1);
		printf("Name:");
		scanf("%s",&s[i].name);
		printf("\nRoll Number:");
		scanf("\n%d",&s[i].roll_no);
		printf("CGPA:");
		scanf("\n%f",&s[i].cgpa);
		printf("Percentage:");
		scanf("\n%f",&s[i].percentage);
		printf("Age:");
		scanf("\n%d",&s[i].age);
		printf("Semester:");
		scanf("\n%d",&s[i].semester);
		
	}
}
void display()
{
	for(int i=0;i<num;i++)
	{
		printf("Printing details of student number %d\n",i+1);
		printf("Name: %s",s[i].name);
		printf("\nRoll Number %d",s[i].roll_no);
		printf("\nCGPA: %f",s[i].cgpa);
		printf("\nPercentage :%f",s[i].percentage);
		printf("\nAge: %d",s[i].age);
		printf("\nSemester : %d",s[i].semester);
		
	}
}
void search()
{
	int R;
	printf("Enter the roll number of student?");
	scanf("%d",&R);
	for(int i=0;i<num;i++)
	{
		if(s[i].roll_no==R)
		{
			printf("Printing the details of student with roll no %d\n",R);
			printf("Name:");
	    	puts(s[i].name);
		    printf("\nRoll Number %d",s[i].roll_no);
		    printf("\nCGPA: %f",s[i].cgpa);
		    printf("\nPercentage :%f",s[i].percentage);
		    printf("\nAge: %d",s[i].age);
		    printf("\nSemester : %d",s[i].semester);
			break;
		}
	}
}
void sort()
{
	int i,j;
	for(i=0;i<num;i++)
    {
        for(j=0;j<num-1;j++)
        {
            if(s[j].roll_no>s[j+1].roll_no)
            {
                z=s[j];
                s[j]=s[j+1];
                s[j+1]=z;
            }
        }
    }
}
void delete_()
{
	int R;
	printf("Enter the roll number of student to delete it permenantly...?");
	scanf("%d",&R);
	int pos;
	for(int i=0;i<num;i++)
	{
		if(s[i].roll_no==R)
		{
		pos=i;
		break;}
	}
	for(int i=pos;i<num-1;i++)
	{
		s[i]=s[i+1];
	}
	num=num-1;
}
void topper()
{
	int tmp=s[0].cgpa;
	int x=0;
	for(int i=0;i<num;i++)
	{
		if(s[i].cgpa>tmp)
		{
		 tmp=s[i].cgpa;
		 x=i; //to keep index no
	    }
	}
	printf("Printing details of topper!!!!!\n");
	printf("Name:");
    puts(s[x].name);
	printf("\nRoll Number: %d",s[x].roll_no);
	printf("\nCGPA: %f",s[x].cgpa);
	printf("\nPercentage :%f",s[x].percentage);
	printf("\nAge: %d",s[x].age);
	printf("\nSemester : %d",s[x].semester);
}
int main()
{
	int choice;
	printf("Enter 1 for inserting record\n2 for displaying records\n3 for searching records"
    "\n4 for sorting records\n5 for deleting records\n6 for displaying topper!");
	while(1)
	{
		printf("So what is your choice now?");
		scanf("%d",&choice);
		if(choice==1)
		insert();
		else if(choice==2)
		display();
		else if(choice==3)
		search();
		else if(choice==4)
		sort();
		else if(choice==5)
		delete_();
		else if(choice==6)
		topper();
		else if(choice==0)
		exit(1);
		else
		printf("Invalid choice, try again with some different number.");
	}
	return 0;
}
