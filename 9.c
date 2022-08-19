#include<stdio.h>
int main()
{
    int i,j,count;
    for(i=1;i<=4;i++)
    {
        count=1;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {   
                printf("%d",count);
                j<4?count++:count--;
            }
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}