#include<stdio.h>
#include<windows.h>
#define PAGESIZE 4096
int main()
{
	system("color F1");
	unsigned int addr,pageNo,offset;
	printf("Please enter the virtual address(in decimal) :");
	scanf("%u",&addr);
	pageNo= addr/PAGESIZE;
	offset= addr%PAGESIZE;
	printf("The Address %u contains:\nPage number = %u \nOffset = %u",addr,pageNo,offset);
	return 0;
}
