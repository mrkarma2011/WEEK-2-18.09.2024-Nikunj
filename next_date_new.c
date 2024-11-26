#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
int  d,m,y;
	printf("Enter the day (1-31): ");
    scanf("%d", &d);
    printf("Enter the month (1-12): ");
    scanf("%d", &m);
    printf("Enter the year: ");
    scanf("%d", &y);


	while((d<1 || d>31) ){
		    	printf("Invalid date, Please enter again\n");
	printf("Enter the day (1-31): ");
    scanf("%d", &d);
    printf("Enter the month (1-12): ");
    scanf("%d", &m);
    printf("Enter the year: ");
    scanf("%d", &y);
	}
	while((m==4||m==6||m==9||m==11) &&(d<1 || d>30)){
		    	printf("Invalid date, Please enter again\n");
		    	printf("Enter the day (1-31): ");
    scanf("%d", &d);
    printf("Enter the month (1-12): ");
    scanf("%d", &m);
    printf("Enter the year: ");
    scanf("%d", &y);
	}
    while((m==2 && d>29 && ((y%4==0 && y%100!=0) || y%400==0)) ){
    	printf("Invalid date, Please enter again\n");
    	printf("Enter the day (1-31): ");
    scanf("%d", &d);
    printf("Enter the month (1-12): ");
    scanf("%d", &m);
    printf("Enter the year: ");
    scanf("%d", &y);
	}
	while ((m==2 && d>28 && !((y%4==0 && y%100!=0) || y%400==0))){
		printf("Invalid date, Please enter again\n");
		printf("Enter the day (1-31): ");
    scanf("%d", &d);
    printf("Enter the month (1-12): ");
    scanf("%d", &m);
    printf("Enter the year: ");
    scanf("%d", &y);
	}
	
	
	





// 31d months, last date
if ((m==1||m==3||m==5||m==7||m==8||m==10) &&  d==31 && d>0)
{
 d=1;
 m=m+1;
}
//31d months b/w date
else if ((m==1||m==3||m==5||m==7||m==8||m==10) && d<31 && d>0)
{
  d++;
}
//30d months last date
else if ((m==4||m==6||m==9||m==11) && d==30 && d>0)
{
  d=1;
  m=m+1;
}
//30d months b/w date
else if ((m==4||m==6||m==9||m==11) && d<30 && d>0)
{
  d++;
}
//december last date
else if (m==12  && d==31 && d>0)
{
  d=1;
  m=1;
  y++;
}
// december b/w date
else if (m==12 && d<31 && d>0)
{
  d++;
}
//feb not leap year last date
else if (m==2 && !( (y%4==0 && y%100!=0) || y%400==0) && d==28 )
{
  d=1;
  m++;
}
// feb not leap year middle date
else if (m==2 && !( (y%4==0 && y%100!=0) || y%400==0) && d<29)
{
  d++;
}
//feb leap year  last date
else if (m==2 && ( (y%4==0 && y%100!=0) || y%400==0) && d==29)
{
  d=1;
  m++;
}
//feb leap year b/w date
else if (m==2 && ( (y%4==0 && y%100!=0) || y%400==0) && d<29)
{
  d++;
}

printf("The next date is %d/%d/%d\n",d,m,y);

return 0;
}
