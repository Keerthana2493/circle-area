#include<stdio.h>
int main()
{
	int r;
	float ac;
	printf("Enter the radius:");
	scanf("%d",&r);
	ac=3.14*r*r;
	printf("The area of circle:%.2f",ac);
	return 0;
}