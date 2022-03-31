#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int len,i,vow=0;
	clrscr();
	printf("\nEnter any string-->");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		vow=vow+1;
	}
	printf("Inputted string--> %s",a);
	printf("\nTotal Vowels--> %d",vow);
	getch();
}