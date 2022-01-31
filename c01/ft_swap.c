#include <stdio.h>

void    ft_swap(int *a, int *b)
{
int tmp;

 tmp = *a;
 *a=*b;
 *b=tmp;
}

int main()
{ 
    int a, b;

a= 555 ; 
b = 956;
ft_swap(&a,&b);
printf("%d\n%d",a,b);
  return 0;
}
               
