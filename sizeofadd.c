#include<stdio.h>

int main()

{
  char ch ='A';
  int i = 11;
  float f = 3.14;
  double d = 9.567;
   
  printf("Values from the Variables are :\n");
  printf("%c\n",ch);
  printf("%d\n",i);
  printf("%f\n",f);
  printf("%lf\n",d);

  printf("Size of each variables\n");
  printf("Size of character: %d\n",sizeof(ch));
  printf("Size of each integer :%d\n",sizeof(i));
  printf("Size of each float :%d\n",sizeof(f));
  printf("Size of each double :%d\n",sizeof(d));
 
  printf("Address of each variables\n");
  printf("Address of ch :%p\n",&ch);
  printf("Address of i :%p\n",&i);
  printf("Address of f :%p\n",&f);
  printf("Address of d :%p\n",&d);
  
     return 0;
}
