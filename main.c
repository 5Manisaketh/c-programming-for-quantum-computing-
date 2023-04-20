#include<stdio.h>
#include<math.h>
    float area1(float,float,float);
 int main()
 {
    float area,a,b,c;
    printf("enter the sides -->");
    scanf("%f%f%f",&a,&b,&c);
    area=area1(a,b,c);
    printf("enter the area of triangle %f",area);
    return 0;
 }
 
 float area1(float a,float b,float c)
  {
     float s,d;
     s=(a+b+c)/2;
     d=sqrt(s*(s-a)*(s-b)*(s-c));
      return d;
  }