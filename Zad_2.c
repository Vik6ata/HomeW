#include<stdio.h>
int triangle(double a,double b,double c, double *S, double *P);
int main()
{  
 double a,b, c, S=0.0,P=0.0;
 triangle( a, b, c, &S, &P);
 return 0;
}

int triangle(double a,double b,double c,double *S,double *P)
{    
    
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
  {
     if(a,b,c>0)
     {
      *S=(a+b+c)/2;
      *P=a+b+c;
      printf("S=%.2lf\n",*S);
      printf("P=:%.2lf\n",*P);
     
     }
     else
     {
        printf("Invalid triangle sides!\n");
     }

  }
   
}