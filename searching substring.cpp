#include<stdio.h>
#include<string.h>
int INDEX(char str[],char t[])
{
	int i,j,ind,chk;
	for(i=0;i<strlen(str)-strlen(t)+1;i++)
	{
		for(j=i;j<i+strlen(t);j++)
		{
			ind=0;
			chk=i;
			if(str[j]!=t[j-i])
			{
				ind=1;
				break;
			}
		}
		if(ind==0)
		{
			printf("index %d",chk);
			break;
		}
	}
	return ind;
}
int main()
{
char str[100],ch[100];
printf("Enter parent string:\n");
gets(str);
printf("Enter str to know it matches or not:\n");
gets(ch);
int inde=INDEX(str,ch);
if(inde==0)
printf("substring has been found successfully");
else if(inde==1)
printf("Sorry! no match found,try again");
return 0;
}
