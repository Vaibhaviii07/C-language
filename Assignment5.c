#include<stdio.h> 
int main()
{
    int a,n;
    int sum =0;
    printf("Enter the natural number:\n");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        if(a%2!=0)
        {
            sum+=a;
        }
    }
    printf("The sum of odd Natural Number upto 10 terms:%d\n",sum);
}
