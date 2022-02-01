#include <unistd.h>

void
ft_putchar (char c)
{
write (1, &c, 1);
}


void    ft_rev_int_tab (int *tab, int x)
{
int tabinit[x];
int i ;
i = 0;
int f ;
int l ;
f = 0 ;
l = x ;
while (i<=x)
{
tabinit[i]=tab[i];
i++;
}
while (f <= x && l >=0) 
{
tab[f]=tabinit[l];
f++;
l--;
}
}
