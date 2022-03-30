/******************************************************************************
fibonacci number means 1st+2nd=3rd
                      2nd+3rd=4th
                      3rd+4th=5th like this

*******************************************************************************/

#include <stdio.h>

int main()
{
    int first=0,second=1,fibo,count=0,n;
    scanf("%d",&n);//here I take input the reange
    while(count<n)//this loop will happend before n
    {
        if(count<=1)//here if count is 0 or 1 or <=1 then the count is fibo
        fibo=count;
        
        else
        {
            fibo=first+second;//here the fibo is the summition of first and second
            first=second;//here the second number will be the first number
            second=fibo;//and the fibo will be the secod number
        }
        printf("%d ",fibo);//every time fibo will print here 
        count++;//and every time count will increage +1 and agin go to the loop
    }

    return 0;
}
