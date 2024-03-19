#include<stdio.h>
int main()
{
    int amount = 375;
    int note100 = amount /100;
    amount %=100;
    int note50 = amount /50;
    amount %=50;
    int note20 = amount /20;
    amount %=20;
    int note10 = amount /10;
    amount %=10;
    int note5 = amount /5;
    amount %=5;
    int note2 = amount /2;
    amount %=2;
    int note1 = amount /1;
    amount %=1;
    printf("%d Note(s) of 100.00\n",note100);
    printf("%d Note(s) of 50.00\n",note50);
    printf("%d Note(s) of 20.00\n",note20);
    printf("%d Note(s) of 10.00\n",note10);
    printf("%d Note(s) of 5.00\n",note5);
    printf("%d Note(s) of 2.00\n",note2);
    printf("%d Note(s) of 1.00\n",note1);
    return 0;
}   