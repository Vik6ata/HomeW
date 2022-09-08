#include<stdio.h>
#include<stdint.h>
unsigned onesCount(uint64_t *mask);
int main(void)
{
  uint64_t mask;
  printf("Enter a number:");
  scanf("%ld",&mask);
  onesCount(&mask);
  return 0;
}

unsigned onesCount(uint64_t *mask)
{
 int count=0;
 for(int bit=63;bit>=0;bit--)
 {
  if(!!(*mask&(1<<bit))==1)
  {
    count++;
  }
 }
printf("Ones=%d\n",count);
}