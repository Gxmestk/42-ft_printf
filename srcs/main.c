#include "../includes/ft_printf.h"

int main()
{
	printf("\n\n");
	//int a = ft_printf("%.10d",LONG_MAX);
	//int a = ft_printf("x%-.dx", 0);
	int a = ft_printf("%x",4294967297);
	//int a =ft_printf("game\n");
	printf("\n\nlen  = %d\n",a);
}