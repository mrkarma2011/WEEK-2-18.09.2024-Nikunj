#include<stdio.h>
int main()
{
		int a,b,c;
	printf("enter 3 sides: ");
	scanf("%d%d%d", &a,&b,&c);
	if(a==b && b==c && c==a){
		printf("The triangle is equilateral");
	}
	else if (a!=b && b!=c && c!=a)
	{
		printf("the triangle is scalene");
	}
	else {
		printf("the triangle is isosceles");
	}
	return 0;
}

