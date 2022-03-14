//deletion
#include<stdio.h>
#include<string.h>
int in;
int CHECK(char s1[],char s2[])
{
	int ind;
	for(int i=0;i<strlen(s1)-strlen(s2)+1;i++)
	{
		for(int j=i;j<i+strlen(s2);j++)
		{
			ind=1;
			in=i;
			if(s1[j]!=s2[j-i])
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
void DELETION(char s1[],char s2[])
{
	 for(int i=0;i<strlen(s2);i++)
	 {
	 	for(int j=in;j<strlen(s1);j++)
	 	s1[j]=s1[j+1];
	 }
	 puts(s1);
}
int main()
{
	char str1[100],str2[10];
	printf("enter string1 and string 2/n");
	gets(str1);
	gets(str2);
	int index=CHECK(str1,str2);
	while(index==1)
	{
	DELETION(str1,str2);
	index=CHECK(str1,str2);
    }
	return 0;
}
