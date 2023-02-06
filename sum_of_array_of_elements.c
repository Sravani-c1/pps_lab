#include<stdio.h>
void main()
{
int a[5],i;
printf("enter 5 elements of array");
for(i=0;i<2;i++);{
scanf("%d",&a[i]);}
int sum=0,*ptr;
ptr=a;
for(i=0;i<5;i++){
sum=sum+(*ptr);
ptr++;
}
printf("sum of array elements is %d",sum);
}
