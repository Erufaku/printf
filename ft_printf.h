#ifndef UNTITLED19_PRINTF_H
#define UNTITLED19_PRINTF_H
#include <stdarg.h>
void	ft_put_16_nbr_low_fd(long int n, int fd, int *num);
void	ft_put_uns_nbr_fd(unsigned int n, int fd, int *num);
void	check_output(const char fmt, va_list *argp, int *num);
int		ft_printf(const char *fmt, ...);
void 	ft_print_string(char *arr, int *num);
void 	ft_putnbr_and_len_fd(int n, int fd, int *num);
#endif //UNTITLED19_PRINTF_H
