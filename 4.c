#include<stdio.h>
#include<conio.h>
int main()
{
    int p,r,t,SI;
    printf("Enter the value of principle, rate and time : ");
    scanf("%d%d%d",&p,&r,&t);
    SI=(p*r*t)/100;
    printf("Simple interest is %d",SI );
    getch();
}
