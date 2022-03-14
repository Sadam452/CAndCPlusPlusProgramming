#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void REPLACEMENT(char *s1,char *old,char *newS)
{
	int l2=strlen(old);
	int l1=strlen(newS);
	int count=0,i=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(strstr(&s1[i],old)==&s1[i])
		{
			count++;
			i=i+l2-1;
		}
	}
	char *upd_str=(char *)malloc(count*(l1-l2)+1);
	int j=0;
	while(*s1)
	{
		if(strstr(s1,old)==s1)
		{
			strcpy(&upd_str[j],newS);
			j=j+l1;
		 	s1=s1+l2;
		}
		else
		upd_str[j++]=*s1++;
	}
	upd_str[++j]='\0';
	puts(upd_str);
}
int main()
{
char str[100],old[100],newS[100];
printf("enter s1:\n");
gets(str);
printf("enter word--old:\n");
gets(old);
printf("enter new word\n");
gets(newS);
REPLACEMENT(str,old,newS);
return 0;	
}
