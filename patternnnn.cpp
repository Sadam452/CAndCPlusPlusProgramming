//pattern matching
#include<stdio.h>
#include<string.h>
int PATTERN(char str1[],char str2[],char s3[])
{
	int ind,chk;
	for(int i=0;i<strlen(str1)-strlen(str2)+1;i++)
	{
		for(int j=i;j<i+strlen(str2);j++)
		{
			ind=1;
			chk=i;
			if(str1[j]!=str2[j-i])
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
 	printf("Substring matched successfully at index number %d\n",chk);
	puts(str1);
	}
	else if(ind==0)
	printf("No match found, try with another word!");
	return ind;
}
int main()
{
	char s1[100],s2[100],s3[100];
	printf("Enter s1\n");
	gets(s1);
	printf("Enter s2\n");
	gets(s2);
	gets(s3);
	PATTERN(s1,s2,s3);
	return 0;	
}

