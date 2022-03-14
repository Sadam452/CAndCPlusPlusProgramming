#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void REPLACE(char *s1,char *old,char *neW)
{
int i=0,j=0,count=0;
int l1=strlen(neW);
int l2=strlen(old);
for(i=0;s1[i]!='\0';i++)
{
	if(strstr(&s1[i],old)==&s1[i])
	{
		count++;
		i=i+l2-1;
	}
}
char *upd_str=(char *)malloc(i+count*(l1-l2)+1);
j=0;
while(*s1)
{
	if(strstr(s1,old)==s1)
	{
		strcpy(&upd_str[j],neW);
		j=j+l1;
		s1=s1+l2;
	}
	else
	{
		upd_str[j++]=*s1++;
	}
}
upd_str[j]=='\0';
puts(upd_str);
	
}
int main()
{
char str[100],oword[100],nword[100];
printf("Enter string,old word, new word\n");
gets(str);
gets(oword);
gets(nword);
REPLACE(str,oword,nword);
return 0;
}
