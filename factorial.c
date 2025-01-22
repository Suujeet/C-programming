#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf("Enter the number to find the factorial:\n");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		fact*=i;

	}
	printf("the factorial of given number is %d",fact);
}
