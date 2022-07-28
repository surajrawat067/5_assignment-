#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c;
    printf("enter a number");
    scanf("%d",&b);
    c=b;
    for(a=2; 11>=a; c=b*a,a++)
    {   printf(" %d\n",c);
    }
    return 0;
}