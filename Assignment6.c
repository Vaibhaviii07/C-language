#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any 3 number \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c)
    {
        printf("A ,B and C are equal");
    }
    else if(a==b)
    {
        if(b>c)
        {
            printf("A and B are same and bigger");
        }
        
        {
            printf("C is bigger than A and B\n");
            printf("A and B are same");
        }
    }
    else if(b==c)
    {
        if(c>a)
        {
            printf("B and C are same and bigger");
        }
        else
        {
            printf("A is bigger than B and C\n");
            printf("B and C are same");
        }
    }
    else if(a==c)
    {
        if(a>b)
        {
            printf("A and C are same and bigger");
        }
        else
        {
            printf("B is bigger than A and C\n");
            printf("A and C are same");
        }
    }
    else if(a>b)
    {
        if(a>c)
        {
            printf("A is bigger than B and C");
        }
        else
        {
            printf("C is bigger then A and B");
        }
    }
    else
    {
        if(b>c)
        {
            printf("B is bigger than A and c");
        }
        else
        {
            printf("C is gerater then A and B");
        }
    }
}
