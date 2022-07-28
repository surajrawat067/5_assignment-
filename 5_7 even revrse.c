#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c;
    printf("enter a number");
    scanf("%d",&b);
    c=b*2;
    for(a=b;b>0;c=c-2,b--)
    printf("%d\n",c);
    return 0;
}