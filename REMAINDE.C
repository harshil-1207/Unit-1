#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,q,r;
	clrscr();
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	q = a/b;
	r = a - (b*q);
	printf("remainder : %d",r);
	getch();
	return 0;
}