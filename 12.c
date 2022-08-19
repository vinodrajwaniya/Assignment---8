#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=0;i<4;i++)
    {
        k='A';
        for(j=0;j<8;j++)
        {
            if(j>=(i+0) && j<=(6-i))
            {
                printf("%c",k);
                j<3?k++:k--;
            }
            else 
                printf(" ");   
        }
        printf("\n");
    }
    return 0;
}