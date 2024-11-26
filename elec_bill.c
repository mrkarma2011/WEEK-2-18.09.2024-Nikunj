#include<stdio.h>
int main()
{
	int x;
	printf("enter units:");
	scanf("%d", &x);
	printf("Total electricty bill is: %d Rs.", 500 + (100*x)); // fixed charge = 500 and charge per unit = 100
	return 0;
}

