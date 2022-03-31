#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10],i,j,p,temp=0;
	clrscr();
	printf("Enter 10 element-->");
	for(i=0;i<=9;i++)
		scanf("%d",&n[i]);
	clrscr();
	printf("Your array is-->");
	for(i=0;i<=9;i++)
		printf("%d\t",n[i]);
	for(i=0;i<=9;i++)
	{
		p=i;
		for(j=i+1;j<=9;j++)
		{
			if(n[p]>n[j])
				p=j;
		}
		if(p!=j)
		{
			temp=n[i];
			n[i]=n[p];
			n[p]=temp;
		}
	}
	printf("\nAfter Sorting Array-->\n");
	for(i=0;i<=9;i++)
		printf("%d\t",n[i]);
	getch();
}