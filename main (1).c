# include <stdio.h>
  int main()
 {
     int a[25][25],b[25][25],c[25][25],i,j,m,n;
     printf("/n enter the number of rows and columns in two matrices");
     scanf("%d %d",&m,&n);
     printf("/n enter the elements in A matrices");
     for (i=0;i<m;i++)
     for (j=0;j<n;j++)
     scanf("%d",a[i][j]);
     printf("/n enter the elements in B matrices");
     for (i=0;i<m;i++)
     for (j=0;j<n;j++)
     scanf("%d",b[i][j]);
     for (i=0;j<m;i++)
     for (j=0;j<n;j++)
     c[i][j]=a[i][j]+b[i][j];
     printf("/n addition of numbers in two matrices");
     for (i=0;j<n;i++)
     {
         printf("/n");
     for (j=0;j<n;j++)
     printf("/t%d",c[i][j]);
     }
 }