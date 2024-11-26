#include<stdio.h>
int main(){
    int basic, sal, da, hra; 
    printf("Enter basic(in lacs)  ");
    scanf("%d", &basic);
    if(basic<=3){
        hra = 5; da= 5;
    }

    if( basic>3 && basic<=10){
        da = 7; hra=7;
}
if(basic>10){
    da=8; hra =10;
}
sal = basic + (da + hra)/10;
printf("Salary is %d", sal);
}
