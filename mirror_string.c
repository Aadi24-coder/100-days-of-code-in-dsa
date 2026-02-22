#include <Stdio.h>
#include <String.h>
int main()
{
    char str[10];
   printf("enter a string ");
   fgets(str,sizeof(str),stdin);
   int len=strlen(str);
   for(int i =len-1;i>=0;i--)
   {
    printf("%c",str[i]);
   }

}