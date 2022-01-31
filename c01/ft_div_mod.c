#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b ;
    printf("%d" ,*div);
    *mod = a%b;
    printf("%d", *mod);
}
  

int main()
{ 
 int a;
 int b;

 int div;
 int mod;


 a = 16;
 b =5; 
 ft_div_mod(a, b,&div,&mod);
}


