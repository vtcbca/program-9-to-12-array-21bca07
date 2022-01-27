#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n[10],temp=0;
	clrscr();
	printf("Enter 10 Element");
	for(i=0;i<=9;i++)
		scanf("%d",&n[i]);
	clrscr();
	printf("Your array is-->");
	for(i=0;i<=9;i++)
		printf("%d\t",n[i]);
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(n[j]>n[j+1])
			{
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
	}
	printf("Sorted array is-->");
	for(i=0;i<=9;i++)
	{
		printf("%d\t",n[i]);
	}
	getch();
}