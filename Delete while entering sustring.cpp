#include<stdio.h>
#include<string.h>
int chk;
int INDEX(char str[],char t[])
{
	int i,j,ind;
	for(i=0;i<strlen(str)-strlen(t)+1;i++)
	{
		for(j=i;j<i+strlen(t);j++)
		{
			ind=1;
			chk=i;
			if(str[j]!=t[j-i])
			{
				ind=0;
				break;
			}
		}
		if(ind==1)
		{
			break;
		}
	}
	return ind;
}
int DELETE_ST(char str[],char t[])
{
         	printf("index %d\n",chk);
			for(int x=0;x<strlen(t);x++)
			{
				for(int x1=chk;x1<strlen(str);x1++)
				str[x1]=str[x1+1];
			}
}
int main()
{
char str[500],ch[100];
printf("Enter parent string:\n");
gets(str);
printf("Enter str to delete\n");
gets(ch);
int inde=INDEX(str,ch);
while(inde==1)
{
	DELETE_ST(str,ch);
	inde=INDEX(str,ch);
}
printf("HERE IS THE UPDATED STRING, CHEERS!\n");
puts(str);
return 0;
}
