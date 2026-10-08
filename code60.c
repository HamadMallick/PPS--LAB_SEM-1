#include<stdio.h>
int main()
{
    int y,y1;
    printf("enter a year");
    scanf("%d",&y);
    y1=y/4;
    if(y1%4==0)
        printf("leap year");
    else
        printf("not leap year");
    return 0;

}
