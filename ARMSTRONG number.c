/******************************************************************************
find ARMSTRONG NUMBER 
means those number per digits qub and sumition = the given number
like 153=1^3+5^3+3^153
        =153
*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,sum=0,i,temp,rem;
   scanf("%d",&n);
   temp=n;
   while(temp!=0)
   {
       rem=temp%10;//here remainder means defarantiat all digit
       sum=sum+rem*rem*rem;//here rem*rem*rem means rem^3 and do sumition with sum
       temp=temp/10;//here temp will change
   }
   if(n==sum)// here if the given number and the sum will same then
   printf("%d is ARMSTRONG number",n);// the number is ARMSTRONG
   else
   printf("%d is not ARMSTRONG number",n);//other wise the given number is not ARMSTRONG

    return 0;
}
