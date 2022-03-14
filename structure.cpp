//create a str that stores info about book, viz.. author,title,price,pages
#include<stdio.h>
#include<string.h>
int main()
{
	struct book
	{
		char title[60];
		char author[30];
		float price;
		int pages;
	};
	book b1;
	printf("Enter the details of book viz.. title, author, price,pages:\n");
	puts("Enter the name of book:\n");
	gets(b1.title);
	puts("Enter the name of author:\n");
	gets(b1.author);
	puts("Enter the price of book:\n");
	scanf("%f",&b1.price);
	puts("Enter the num,ber of pages:\n");
	scanf("%d",&b1.pages);
	printf("Details entered by you are:\n");
	printf("Title of book is:\t");
	puts(b1.title);
	printf("Author of book is: \t");
	puts(b1.author);
	printf("Price of book is:\t");
	printf("%f\n",b1.price);
	printf("Number of pages are: %d\n",b1.pages);
	return 0;
}
