#include "../includes/ft_printf.h"

int main()
{
	int a =ft_printf("x%0+4Xx\n",15);
	//int a =ft_printf("game\n");
	printf("len  = %d\n",a);
}