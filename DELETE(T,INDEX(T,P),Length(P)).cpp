#include<stdio.h>
#include<string.h>
char str[100],ch[100],NewStr[100],New1[100];
int Delete(int);
int INDEX()
{
	int i,j,ind,chk,m=0,x;
	for(i=0;i<strlen(str)-strlen(ch);i++)
	{
		for(j=i;j<i+strlen(ch);j++)
		{
			ind=0;
			chk=i;
			if(str[j]!=ch[j-i])
			{
				ind=1;
				break;
			}
		}
		if(ind==0)
		{
			printf("index %d",chk);
			for(x=chk+strlen(ch);x<strlen(str);x++)
			{
				NewStr[m]=str[x];
			}
			for(x=0;x<chk;x++)
			New1[x]=str[x];
			char abc[100];
			abc=strcat(New1,NewStr);
			puts(abc);
			break;
		}
	}
	puts(str);
}
int Delete()
{
	printf("IN DELETE FUNCTION NOW!");
	int tmp=INDEX();
	printf("%d",tmp);
		while(tmp!=0)
	{
		for(int i=tmp;i<(strlen(ch)+tmp);i++)
		{
			str[i]=NULL;
		}
		tmp=INDEX();
	}
	puts(str);
}
int main()
{
printf("Enter parent string:\n");
gets(str);
printf("Enter str to know it matches or not:\n");
gets(ch);
INDEX();
/*if(inde==0)
printf("substring has been found successfully");
else if(inde==1)
printf("Sorry! no match found,try again");*/
return 0;
}
