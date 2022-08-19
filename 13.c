#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=0;i<7;i++)
    {
        k='A';
        for(j=0;j<13;j++)
        {
            if(((j>=0) && (j<=6-i)) || ((j>=6+i) && (j<=12)))
            {
                printf("%c",k);
                j<6?k++:k--;
            }
            else 
                printf(" ");   
        }
        printf("\n");
    }
    return 0;
}