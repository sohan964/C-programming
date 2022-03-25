/******************************************************************************

 find GCD between 2 number
 60=2x2x3x5
 24=2xx2x3
 here thouse number is same only those numbers multiplication ans will be LCM
 find LCM

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1,n2,rem,i,lcm,gcd,num1,num2;
    scanf("%d %d",&num1,&num2);
    n1=num1;//here I take n1=num1 because on the last num1 value will be change that's why
     n2=num2;//here I take n2=num2 because on the last num1 value will be vhange that's why
    if(n2!=0)//here if n2 equale not 0 then it will be start other wise not will start
    {
        rem=n1%n2;// this is the process for find gcd
        n1=n2;//here n2 value will come in n1
        n2=rem;//here rem value will come in n2
    }
    gcd=rem;
    lcm=(num1*num2)/gcd;//this is the process for LCM
    printf("GCD=%d\n",gcd);
    
    printf("LCM%d",lcm);
    

    return 0;
}
/*
input
60
24
output
GCD=12
LCM120
*/
