#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp,profit,per;
    printf("Enter the value of cost price and selling price: ");
    scanf("%d%d",&cp,&sp);
    profit=sp-cp;
    per=(profit*100)/cp;
    printf("Profit percentage is %d",per);
    getch();
}
