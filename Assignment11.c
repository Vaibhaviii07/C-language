#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*file1,*file2,*file3;
    char name[30];
    int rollno;
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter your rollno:");
    scanf("%d",&rollno);
    file1=fopen("file1.txt","a");
    fprintf(file1,"\n%s %d",name,rollno);
    fclose(file1);

    char collage[30];
    printf("enter your collage:");
    scanf("%s",&collage);
    file2=fopen("file2.txt","a");
    fprintf(file2,"\n%s",collage);
    file3=fopen("file3.txt","w");
    fclose(file2);
    return 0;
}