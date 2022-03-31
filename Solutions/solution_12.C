#include<stdio.h>
#include<conio.h>
void main()
{
	char n1[100],n2[100];
	int len1,len2,cmp;
	clrscr();
	printf("Enter first string-->");
	gets(n1);
	printf("Enter second string-->");
	gets(n2);
	len1=strlen(n1);
	len2=strlen(n2);
	printf("Length of first string is-->%d\n",len1);
	printf("Length of second string is-->%d\n",len2);
	if(strcmp(n1,n2)==0)
	{
		printf("Both string are same");
	}
	else
	{
		printf("Both string are different");
	}
	getch();
}