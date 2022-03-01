#include<stdio.h>
#include<stdlib.h>
void main()
{
   int num1,num2,num3;
  printf("Enter num1:%d\n num2:%d\nnum3:%d\n");
  if(num1>num2 && num1>num3)
    printf("%d is greatest number",num1);
  else if(num2>num1 && num2>num3)
    printf("%d is greatest number",num2);
  else
    printf("%d is a greatest number",num3);
}
