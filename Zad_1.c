#include<stdio.h>
int main()
{
    double a=0.0,b=0.0;
    char operator;
   
   while(scanf("%lf %c %lf",&a,&operator,&b)!=EOF)
   {
    if(operator=='+')
    {
      printf("=%.2lf\n",a+b);
    }
     else if(operator=='-')
    {
      printf(":%.2lf\n",a-b);
    }
     else if(operator=='*')
    {
      printf("=%.2lf\n",a*b);
    }
     else  if(operator=='/')
    {
      printf("=%.2lf\n",a/b);
    }
   }
    
    
    
    return 0;
}