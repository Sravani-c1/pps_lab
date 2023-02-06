#include<stdio.h>
int fact(int);
int main(){
int num;
printf("enter the number");
scanf("%d",&num);
int res=fact(num);
printf("factorial of %d is %d",num,res);
return 0;
}
int fact(int num)
{
if((num ==0)||(num==1))
return 1;
else
return num*fact(num-1);
}
