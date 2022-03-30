/******************************************************************************
print all the character by serial from given string
like,  input =sohan
output =
s
o
h
a
n
*******************************************************************************/
#include<stdio.h>
#include <stdio.h>

int main()
{
   char s1[100];//this array for diclaer string
    int i=0;
    fgets(s1,100,stdin);//this is for take input string like paragraph 
    while(s1[i]!='\0')//here if the given sring character is not null char('\0')
    {//then the loop will happen
        printf("%c\n",s1[i]);//here I print the string all the characterds
        i++;//every time i will increage +1
    }

    return 0;
}

