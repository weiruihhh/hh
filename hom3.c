#include<stdio.h>
//#define CONVERT 100
int main()
{
char str[50];
printf("请输入字符串");
scanf("%s\n",str);
int i=0;
for(i=0;str[i]!='\0';i++)
 {
 if(str[i]>='A'&&str[i]<='Z')
   str[i]= str[i]+32;
 else if(str[i]>='a'&&str[i]<='z')
   str[i]= str[i]-32; 
}
#ifdef CONVERT
printf("%s\n",str);
#else
printf("211830123\n");
#endif 
}
