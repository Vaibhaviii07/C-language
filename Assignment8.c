#include<stdio.h>
int main()
{
    int a,b,c,num=0;
    for(a=1;a<=5;a++)
    {
        
        for(c=1;c<a;c++)
        {
            
            num++;
            printf("%d",num);
        }
        printf("\n");
    }
}