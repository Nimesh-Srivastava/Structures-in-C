#include<stdio.h>
#include<conio.h>

struct stud
{
	char reg[20],name[20],fld[100];
};

void main()
{
	int i;
	struct stud s[100];
	for(i=0;i<100;i++)
	{
		clrscr();
		printf("\n\nEnter records of student %d :-",i+1);
		printf("\n\nRegistration number : ");
		scanf("%s",&s[i].reg);
		printf("\nName : ");
		scanf("%s",&s[i].name);
		printf("\nField of study : ");
		scanf("%s",&s[i].fld);
	}
	for(i=0;i<100;i++)
	{
		printf("\n\nRecord of student %d :-",i+1);
		printf("\n\nRegistration number : %s",s[i].reg);
		printf("\n\nName : %s",s[i].name);
		printf("\n\nField of study : %s",s[i].fld);
		printf("\n\n\n");
	}
	getch();
}