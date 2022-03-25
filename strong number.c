/******************************************************************************
find strong number ,it's means those number which number digits factorial summition 
is equal to the given number
like 145 = 1(fact)+4(fact)+5(fact)
         = 1+24+120
         =145

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,sum=0,temp,fact,rem,i;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)//here if temp is equal to 0 then it will not work
    {//if temp not equal 0 then will go next step
        rem=temp%10;//this for find given number digits
        fact=1;//emazine factorial is 1
        for(i=1;i<=rem;i++)//this will heppen 1 to remainder
        {
            fact=fact*i;//here will find factorial
        }
        sum=sum+fact;//this summition for all digits factorial summition
        temp=temp/10;//this is devidet value also a new temp
    }
    if(n==sum)//if the given number and the summition is same them
    printf("%d is a strong number",n);//the given number is strong
    else
    printf("%d is not strong number",n);//other wise not

    return 0;
}
