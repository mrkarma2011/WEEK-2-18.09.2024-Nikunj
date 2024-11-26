#include<stdio.h>
int main()
{
	char x;
	printf("enter your character: ");
	scanf("%c", &x);
	if(x=='A' || x=='B'|| x=='C'|| x=='D'|| x=='E' || x=='F'|| x=='G'|| x=='H'|| x=='I'|| x=='J'|| x=='K'|| x=='L'|| x=='M'|| x=='N'|| x=='O'|| x=='P'|| x=='Q'|| x=='R'|| x=='S'|| x=='T'|| x=='U'|| x=='V'|| x=='W'|| x=='X'|| x=='Y'|| x=='Z')
	{
		printf("%c is an uppercase letter ", x);
	}
	else{
		printf("%c is a lowercase letter", x);
	}
	return 0;
}

