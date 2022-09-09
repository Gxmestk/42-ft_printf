#include "../includes/ft_printf.h"

int main()
{
	int a =ft_printf("x%0+4dx\n",1);
	//int a =ft_printf("game\n");
	printf("len  = %d\n",a);
}