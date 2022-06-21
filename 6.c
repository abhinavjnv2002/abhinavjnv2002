#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,Avg;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    Avg=(a+b+c)/3;
    printf("Average of three number is %d",Avg);
    getch();
}
