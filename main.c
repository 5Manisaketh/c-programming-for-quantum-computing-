#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20]="hello";
      char   str2[20]="world";
        char str3[20];
         int len;
         strcpy(str3,str1);
         printf("copied string=%s/n",str3);
         strcat(str1,str2);
         printf("concentrated string is=%s/n",str1);
         len=strlen(str1);
         printf("copied string =%d/n",len);
         return 0;
}