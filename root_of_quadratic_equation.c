#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d;
	float root1, root2;
	printf("Enter the values of a, b, c in equation ax^2+bx+c=0.\n");
	scanf("%d%d%d", &a, &b, &c);
	
	d=sqrt(b*b-4*a*c);
	
	if(d<0)
	{
	printf("imaginary roots");
	}
	
	else
	{
		root1=(-b+d)/2*a;
		root2=(-b-d)/2*a;
	printf("the roots are:%f and %f",root1,root2);
	}
	
	
	return 0;
}
