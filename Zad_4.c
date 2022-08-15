#include<stdio.h>
#include<math.h>
int quadEq(double a,double b,double c,double *D);
int main()
{  
 double a,b,c,D;
 quadEq( a, b, c,&D);
 return 0;
}
int quadEq(double a,double b,double c,double *D)
{ 
  scanf("%lf %lf %lf ",&a,&b,&c);
  printf("\n");
  *D=pow(b,2)-(4*a*c);
  double x1,x2,x;
  if(D>0)
  {
    x1=(-b+sqrt(*D))/(2*a);
    x2=(-b-sqrt(*D))/(2*a);
    printf("x1=%.2lf\n",x1);
    printf("x2=%.2lf\n",x2);
  }
  else if(D==0)
  {
    x=-b/(2*a);
    printf("X=%.2lf",x);
  }
else
{
    printf("No real roots!");
}
}