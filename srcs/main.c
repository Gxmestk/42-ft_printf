#include "../includes/ft_printf.h"

int main()
{
	printf("\n\n");
	//int a = ft_printf("%.10d",LONG_MAX);
	int a = ft_printf("x%0014.2dx", -132456);
	//int a =ft_printf("game\n");
	printf("\n\nlen  = %d\n",a);
}