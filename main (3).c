#include <stdio.h>
int main()
{
    int a,b,i,flag;
    printf("/n enter the start value:");
    scanf("%d",&a);
    printf ("/n enter the end value:");
    scanf("%d",&b);
    printf("enter the number between the %d and %d:",a,b);
    while(a<b)
    {
    for (i=2;i<=a;++i);
    {
    if (i%a==0)
    {
    flag=1;
    break ;
    }
    }
    if (flag=0);
    printf("%d",&a);
    ++a;
    }
 printf("/n");
 return 0;
}


