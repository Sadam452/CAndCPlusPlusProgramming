#include<stdio.h>
#include<string.h>
int main()
{
	struct book
	{
		char title[30];
		char author[30];
		float price;
		int pages;
	};
	struct book b1={"data structure","shaum TT",123.4,123};
	puts(b1.title);
	puts(b1.author);
	printf("%f\n",b1.price);
	printf("%d",b1.pages);
	return 0;
}
