#include<stdio.h>
#include<stdint.h>
unsigned onesCount(uint64_t *mask);
int main(void)
{
  uint64_t mask=100;
  
  onesCount(&mask);
  return 0;
}

unsigned onesCount(uint64_t *mask)
{
 int count=0;
 while(mask>0)
 {
  if(*mask& 1)
  {
    count++;
    *mask=*mask>>1;

  }
 }
 
 printf("Ones=%d\n",count);
}