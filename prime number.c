//this program for the given number is prime number or not
/* prime number means which number can not divaidate with our
1 and that number
like 5, 3, 7, 11 etc;*/
#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)//we know that any number can devidete by 1 and this number
    // that's whey I take here i=2 and i will go befor n;
    {
        if(n%i==0)//here every time n will be devidete by i,
        //if there find any reminder is = 0 then every time count will increage 1;
        {
            count++;//that means count=count+1;
            break;//in the last the process will be break
        }
    }
    if(count==0)// if count = 0 means if n%i!=0 every time
    printf("%d is prime number",n);
    else
    printf("%d is not a prime number",n);
    
    return 0;
}
