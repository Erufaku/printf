#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"
void	check_output(const char fmt, va_list *argp, int *num)
{
	if (fmt == '%')
		ft_putchar_fd('%', 1);
	else if (fmt == 'c')
		ft_putchar_fd(va_arg(*argp, int), 1);
	else if (fmt == 's')
		ft_print_string(va_arg(*argp,char *), num);
	else if ((fmt == 'd') || (fmt == 'i'))
	{
		ft_putnbr_and_len_fd(va_arg(*argp, int), 1, num);
		*num -= 1;
	}
	else if (fmt == 'u')
	{
		ft_put_uns_nbr_fd(va_arg(*argp,unsigned int), 1, num);
		*num -= 1;
	}
	else if (fmt == 'p')
		ft_print_pointer(va_arg(*argp, unsigned long), num);
	else if (fmt == 'X')
	{
		ft_put_16_nbr_height_fd(va_arg(*argp, int), 1, num);
		*num -= 1;
	}
	else if (fmt == 'x')
	{
		ft_put_16_nbr_low_fd(va_arg(*argp, int), 1, num);
		*num -= 1;
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list argp;
	int		num;

	num = 0;
	va_start (argp, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			check_output(*fmt, &argp, &num);
		}
		else
			ft_putchar_fd(*fmt, 1);
		fmt++;
		num++;
	}
	va_end(argp);
	return (num);
}

/*int main(void)
{
	//long abc = 2147483647;
	ft_printf("%d\n", ft_printf(" %p %p %p ", -9223372036854775806, 0, 16));
	printf("%d\n", printf(" %p %p %p ", -9223372036854775806, 0, 16));
}*/