#include<stdio.h>//reverse number
int main()
{
int n,i,rev;
printf ("Enter A Number:");
scanf("%d",&n);
rev=0;
i=0;
while(n!=0)
{
i=n%10;
rev=rev*10+i;
n=n/10;
}
printf ("Reverse Num :%d",rev);
return 0;
}
