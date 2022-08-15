#include<stdio.h>
int rechtangle(double w,double h,double *S, double *P);
int main()
{  
    double w=0.0,h=0.0,S=0.0,P=0.0;
    rechtangle(w,h,&S,&P);

  return 0;
}
int rechtangle(double w,double h,double *S, double *P)
{
 while(scanf("%lf %lf ",&w,&h)!=EOF)
 {
   if(w>0&&h>0)
   { 
    *S=w*h;
    *P=(2*w)+(2*h);
    printf("P=%.2lf\n",*P);
    printf("S=%.2lf\n",*S);
   }
   else
   {
    printf("Invalid rechtangle sizes!\n");
   }
 }
}