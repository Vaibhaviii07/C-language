#include<stdio.h>
int main()
{
    int number_of_days =1329;
    int years=number_of_days/365;
    int weeks=number_of_days%365/7;
    int days=number_of_days%365%7;

    printf("years %d\n",years);
    printf("weeks %d\n",weeks);
     printf("days %d\n",days);
    
}
