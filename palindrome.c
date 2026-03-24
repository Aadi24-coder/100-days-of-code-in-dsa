#include <Stdio.h>
#include <string.h>
int main()
{
   char str[10];
   char str2[10];
   printf("enter a string ");
   fgets(str,sizeof(str),stdin);
   int len=strlen(str);
   if(str[len-1]=='\n'){  // to remove new line character 
    str[len-1]='\0';      // replace the new line character to \0 since a string when input from fgets adds a new line keyword 
    len--;
   }
   int flag=1;
   for(int i =0;i<len/2;i++)  // to check half only str[0] vs str[4] , str[1] vs str[3]
   {
      if(str[i]!=str[len-1-i]){
        flag=0;
        break;
      }
   }
   if(flag){
    printf("it is a palindrome string ");
   }
   else{
    printf("it is not a palindrome string ");
   }
}
