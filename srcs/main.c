#include "../includes/ft_printf.h"

int main()
{
	int a =ft_printf("x%+05.3dx\n",123);
	//int a =ft_printf("game\n");
	printf("len  = %d\n",a);
}