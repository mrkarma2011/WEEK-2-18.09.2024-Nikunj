#include<stdio.h>
int main()
{
	int m,y;
	 printf("Enter the month (1-12): ");
    scanf("%d", &m);
    printf("Enter the year: ");
    scanf("%d", &y);
    if((y%4==0 && y%100!=0) || y%400==0 && m==2){
    	printf("Days=29");
	}
	else if(!((y%4==0 && y%100!=0) || y%400==0) && m==2){
    	printf("Days=28");
	}
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		printf("Days=31");
	}
	else{
		printf("Days=30");
	}
	return 0;
}

