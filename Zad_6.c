#include<stdio.h>
#include<stdint.h>
unsigned Set(uint64_t *attendance,int bit);
unsigned Clear(uint64_t *attendance,int bit);
unsigned Check(uint64_t *attendance,int bit);
unsigned Flip(uint64_t *attendance,int bit);
int main(void)
{  
  uint64_t attendance=0;
  int bit=0;
  int option;
  
  while(option!=4)
  {
    printf("1.Set attendance\n");
    printf("2.Clear attendance\n");
    printf("3.Attendane info\n");
    printf("4.Change attendance\n");
    printf("5.Exit\n");
    scanf("%d",&option);
    if(option==1)
    {
      Set(&attendance,bit);
    }
    else if (option==2)
    {
       Clear(&attendance,bit);
    }
    else if(option==3)
    {
       Check(&attendance,bit);
    }
    else if(option==4)
    {
      Flip(&attendance,bit);
    }
    

  }
  return 0;
}

unsigned Set(uint64_t *attendance,int bit)
{
 printf("\nSet the attendance of student number:");
 scanf("%d",bit);
 *attendance|=(1<<bit);
}

unsigned Clear(uint64_t *attendance,int bit)
{
 printf("\nSet the attendance of student number:");
 scanf("%d",&bit);
 *attendance&=~(1<<bit);
}

unsigned Check(uint64_t *attendance,int bit)
{
 for(bit=63;bit>=0;bit--)
 {
   printf("%d",!!(*attendance&(1<<bit)));
 }
}

unsigned Flip(uint64_t *attendance,int bit)
{
 printf("\n Change attendance of a student number:");
 scanf("%d",&bit);
 *attendance^=(1<<bit);

}