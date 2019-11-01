#include<stdio.h>
#include<conio.h>

struct emp
{
	long double emp_id,mob;
	char name[50];
};

void main()
{
	int i;
	struct emp e[3];
	for(i=0;i<1;i++)
	{
		clrscr();
		printf("\n\nEnter employee id \t\t: ");
		scanf("%d",&e[i].emp_id);
		printf("\nEnter the name of the employee \t: ");
		gets(e[i].name);
		gets(e[i].name);
		printf("\nEnter mobile number \t\t: ");
		scanf("%d",&e[i].mob);
	}
	clrscr();
	printf("\nEntered values are :-");
	for(i=0;i<3;i++)
	{
		printf("\n\n\nName \t\t: %s",e[i].name);
		printf("\nEmployee id \t: %d",e[i].emp_id);
		printf("\nMobile number \t: %d",e[i].mob);
	}
	getch();
}
