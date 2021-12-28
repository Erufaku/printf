#include "libft.h"
#define a "0123456789abcdef"
void 	ft_putnbr_and_len_fd(int n, int fd, int *num)
{
	if (n == -2147483648)
	{
		*num += 11;
		return (ft_putstr_fd("-2147483648", fd));
	}
	if (n == 2147483647)
	{
		*num += 10;
		return (ft_putstr_fd("2147483647", fd));
	}
	if (n < 0)
	{
		*num += 1;
		ft_putchar_fd('-', fd);
		ft_putnbr_and_len_fd(-n, fd, num);
	}
	else if (n > 9)
	{
		ft_putnbr_and_len_fd(n / 10, fd, num);
		ft_putnbr_and_len_fd(n % 10, fd, num);
	}
	else
	{
		*num += 1;
		ft_putchar_fd(n + '0', fd);
	}
}

void 	ft_put_16_nbr_low_fd(long int n, int fd, int *num)
{
	if (n == -2147483648)
	{
		*num += 8;
		return (ft_putstr_fd("80000000", fd));
	}
	if (n == 2147483647)
	{
		*num += 8;
		return (ft_putstr_fd("7fffffff", fd));
	}
	if (n < 0)
		ft_put_16_nbr_low_fd(4294967296 + n, fd, num);
	else if (n > 15)
	{
		ft_put_16_nbr_low_fd(n / 16, fd, num);
		ft_put_16_nbr_low_fd(n % 16, fd, num);
	}
	else
	{
		*num += 1;
		ft_putchar_fd(a[n], fd);
	}
}

void 	ft_put_uns_nbr_fd(unsigned int n, int fd, int *num)
{
	if (n == 4294967295)
	{
		*num += 10;
		return (ft_putstr_fd("4294967295", fd));
	}
	if (n < 0)
	{
		*num += 1;
		ft_put_uns_nbr_fd(-n, fd, num);
	}
	else if (n > 9)
	{
		ft_put_uns_nbr_fd(n / 10, fd, num);
		ft_put_uns_nbr_fd(n % 10, fd, num);
	}
	else
	{
		*num += 1;
		ft_putchar_fd(n + '0', fd);
	}
}

void 	ft_print_string(char *arr, int *num)
{
	if (arr == NULL)
	{
		ft_putstr_fd("(null)", 1);
		*num += 5;
	}
	else
	{
		ft_putstr_fd(arr, 1);
		*num += ft_strlen(arr) - 1;
	}
}

void	ft_print_pointer(unsigned long c, int *num)
{
	char tmp[36];
	int i;

	i = -1;
	while (++i < 36)
		tmp[i] = 'z';
	ft_putstr_fd("0x", 1);
	*num += 2;
	i = 0;
	while (c > 15)
	{
		*num += 1;
		tmp[i] = a[c % 16];
		i++;
		c /= 16;
	}
	tmp[i] = a[c % 16];
	i++;
	while (i-- > 0)
		ft_putchar_fd(tmp[i], 1);
}
