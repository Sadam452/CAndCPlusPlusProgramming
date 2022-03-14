#include<stdio.h>
 int main ()
{
	int i,j,k,test[2][3][2];
 for (i=0;i<2;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		for(k=0;k<2;k++){
 		printf("Enter value of test[%d][%d][%d]:",i,j,k);
 		scanf("%d",&test[i][j][k]);}
	 }
 }
printf("Displaying Values:\n");
for (i=0;i<2;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		for(k=0;k<2;k++){
		 
 		printf("test[%d][%d][%d]=%d\n",i,j,k,test[i][j][k]);}
	 }
 }
 return 0; 
}
