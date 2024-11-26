#include<stdio.h>
int main()
{
	char x;
	printf("enter your char:");
	scanf("%c", &x);
	
	if(x=='/'|| x=='.'|| x=='?'||x==','||x==';'||x==':'||x=='!'||x=='@'||x=='#'||x=='$'||x=='%'||x=='^'||x=='&'||x=='*'||x=='('||x==')'){
		printf("%c is a special character", x);
	}
	else if( x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'||x=='0'){
		printf("%c is a digit", x);
	}
	else {
		printf("%c is an alphabet",x);
	}
	return 0;
}

