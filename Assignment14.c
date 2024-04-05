#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter numbers:");
    scanf("%d",&n);
    int a[5];
    int sum=0;
   for(i=0;i<n;i++)
    {
        sum+=i;
    }
     printf("sum :%d\n",sum); 
    
}