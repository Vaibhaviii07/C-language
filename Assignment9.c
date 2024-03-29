#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number for table:");
    scanf("%d",&b);
    for(c=1;c<=10;c++)
    {    
        for(a=1;a<=b;a++)
        {
            printf("%d*%d=%d\t\t",a,c,c*a); 
        }
        printf("\n"); 
    }

}
