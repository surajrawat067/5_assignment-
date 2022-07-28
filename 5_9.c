#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c;
    a=1;
    printf("enter a number");
    scanf("%d",&b);
    while(b>=a)
    {
    c=a*a*a;
    a++;
    printf("\n%d",c);
    }
    
    return 0;
}