#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	printf("enter marks(phy, chem, bio, maths, comp): ");
	scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
	int p = (m1+m2+m3+m4+m5)/5 ;
	if(p>=90){
		printf("your grade is: A ");
	}
	else if(p>=80){
		printf("your grade is: B ");
	}
	else if(p>=70){
		printf("your grade is: C ");
	}
	else if(p>=60){
		printf("your grade is: D ");
	}
	else if(p>=40){
		printf("your grade is: E ");
	}
	else{
		printf("your grade is: F");
	}
	return 0;
}

