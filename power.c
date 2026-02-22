#include <Stdio.h>
int power(int b,int p){
    if(p==0)
    {
        return 1;
    }
    else{
        return b*power(b,p-1);    
    }
}
int main()
{
int b;
int p;
printf("enter the base ");
scanf("%d ",&b);
printf("enter the power");
scanf("%d ",&p);
printf("the power of the number is :%d",power(b,p));
}