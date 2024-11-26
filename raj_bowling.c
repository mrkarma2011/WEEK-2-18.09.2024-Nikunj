#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 values: ");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b && a>c){
		printf("%d is best technique",a);
	}
	else if(b>a && b>c){
		printf("%d is best technique",b);
	}
	else if(c>a && c>b){
		printf("%d is best technique",c);
	}
	return 0;
}

