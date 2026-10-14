#include<stdio.h>
int main()
{
 float a;
 float b;
 char ch;
 printf("Enter the Numbers\n",a,b);
 printf("Enter the Operator\n",ch);
 scanf("%f %c %f",&a,&ch,&b);
 switch(ch)
 {
  case'+':
  {
   printf("add=%f",a+b);
   break;
  }
  case'-':
  {
   printf("sub=%f",a-b);
   break;
  }
  case'*':
  {
   printf("mul=%f",a*b);
   break;
  }
  case'/':
  {
   printf("div=%f",a/b);
   break;
  }
  default:
  {
   printf("Incalid Operation");
  }
 }
  return 0;
}