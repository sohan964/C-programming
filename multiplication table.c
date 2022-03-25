//program about multiphication table 1 to n 
#include <stdio.h>

int main()
{
    int i,j,n,res;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//this loop for the multiphication table limit 1 to n
    {
        for(j=1;j<=10;j++)//the loop for multiphication table rule 1 table will go 1 to 10 not before and after
    {
        res=i*j;//i will go 1 to n, j will 1 to 10 and i and j multiplication ans will be store on res,
        printf("%d X %d = %d\n",i,j,res);//here will be print all
    }
    printf("\n");//this is for a gap for one to another table
    }
    

    return 0;
}
/*
2 is input

1 X 1 = 1
1 X 2 = 2
1 X 3 = 3
1 X 4 = 4
1 X 5 = 5
1 X 6 = 6
1 X 7 = 7
1 X 8 = 8
1 X 9 = 9
1 X 10 = 10

2 X 1 = 2
2 X 2 = 4
2 X 3 = 6
2 X 4 = 8
2 X 5 = 10
2 X 6 = 12
2 X 7 = 14
2 X 8 = 16
2 X 9 = 18
2 X 10 = 20
*/
