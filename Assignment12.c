#include<stdio.h>
int main()
{
   int i,j,num=0;
   int a[3][3];
   int b[3][3];
   int c[3][3];

   //FIRST
   for(i=0;i<3;i++)
   {
        for(j=0;j<3;j++)
        {   
            while(1)
            {   
                printf("Enter a[%d][%d]=",i,j);
                scanf("%d",&num);
                if(num%2 == 0)
                {
                    a[i][j]=num;
                    break;
                }
            }
        }
   }
    printf("\n\n");
//SECOND ARRAY

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            while(1)
            {
                printf("Enter b[%d][%d]=",i,j);
                scanf("%d",&num);
                if(num%2!=0)
                {
                    b[i][j]=num;
                    break;
                }  
            }
        }   
    }  


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }  
        printf("\n");
    }  
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
        }    
        printf("\n");
    }   
    printf("\n");

//R E S U L T

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }    
        printf("\n");    
    }
}