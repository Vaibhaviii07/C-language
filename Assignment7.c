#include<stdio.h>
int main()
{
    int n1,n2=0;
    printf("Enter any number:");
    scanf("%d",&n2);
    for(n1=1;n1<=n2;n1++)
    {
            int cube=n1*n1*n1;
            printf("Number is:%d and cube of the %d is:%d\n",n1,n1,cube);
    }
}  