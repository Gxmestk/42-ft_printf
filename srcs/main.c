#include "../includes/ft_printf.h"

int main()
{
	printf("\n\n");
	//int a = ft_printf("%.10d",LONG_MAX);
	//int a = ft_printf("x%-.dx", 0);
	//int a =   ft_printf("the address is %13p", (void *)0x7ffe6b8e60c8);
	//int a =   ft_printf("the address is %20p", (void *)0xffffffffffffffff);
	int a = ft_printf("%1s", NULL);
	//int a =   ft_printf("%#3x", 255);
	//int a =ft_printf("game\n");
	printf("\n\nlen  = %d\n",a);
}
/*   (void *)0xffffffffffffffff NULL (void *)0x8000000000000000   */