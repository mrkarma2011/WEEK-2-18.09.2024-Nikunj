#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 numbers: ");
	scanf("%d%d%d", &a,&b,&c);
	if (a==b && b==c && c==a){
		printf("Numbers are equal");
	}
	else{
		printf("Numbers are not equal");
	}
	return 0;
}

