/******************************************************************************
string lenth like
input = fuck
output = 4
*******************************************************************************/
#include<string.h>
#include <stdio.h>

int main()
{
   char s1[100];
   fgets(s1,100,stdin);
   int lenth=strlen(s1);//strlen means that will find given string lenth
   printf("%d",lenth);
    

    return 0;
}

