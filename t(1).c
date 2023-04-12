# include <stdio.h>
 int main ()
 {
     int a=10,b=15;
     printf("before swap of numbers a=%d,b=%d",a,b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("after the swap of numbers a=%d,b=%d",a,b);
     return 0;
 }