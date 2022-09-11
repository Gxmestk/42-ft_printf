#include "../includes/ft_printf.h"

int main()
{
	int		a = -4;
	//int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	//int		f = 42;
	//int		g = 25;
	//int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	//char	*n = "abcdefghijklmnop";
	//char	*o = "-a";
	//char	*p = "-12";
	//char	*q = "0";
	//char	*r = "%%";
	//char	*s = "-2147483648";
	//char	*t = "0x12345678";
	//char	*u = "-0";

	printf("\n\n");
	//int a = ft_printf("%.10d",LONG_MAX);
	//int a = ft_printf("x%-.dx", 0);
	//int a =   ft_printf("the address is %13p", (void *)0x7ffe6b8e60c8);
	//int a =   ft_printf("the address is %20p", (void *)0xffffffffffffffff);
	//int a = ft_printf("%1s", NULL);
	//int a = ft_printf("xxx%+.2147483600dxxx",5);
	int XXX = ft_printf("%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d",-4, 0, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	//int a = ft_printf("xxx%2147483646dxxx",5);
	//int a =ft_printf("game\n");
	printf("\n\nlen  = %d\n",XXX);
}
/*   (void *)0xffffffffffffffff NULL (void *)0x8000000000000000   */