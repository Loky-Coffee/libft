/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:28:44 by aalatzas          #+#    #+#             */
/*   Updated: 2024/03/11 23:44:55 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd_printf(long int n, int fd, t_counter *data, char *basestr)
{
	int	base;
	int	j;

	j = 0;
	base = ft_strlen_printf(basestr);
	if (n < 0)
	{
		j = ft_putstr_fd_printf("-", fd, data);
		if (j != 1)
			return (-1);
		n = n * -1;
	}
	if (n >= base)
	{
		j = ft_putnbr_fd_printf(n / base, fd, data, basestr);
		if (j < 0)
			return (-1);
		if (ft_putchar_fd_printf(basestr[n % base], fd, data) != 1)
			return (-1);
	}
	else
		if (ft_putchar_fd_printf(basestr[n], fd, data) != 1)
			return (-1);
	return (1);
}

int	check_args(char template, va_list args, t_counter *data)
{
	if (template == 'c')
		return (ft_putchar_fd_printf(va_arg(args, int), 1, data));
	else if (template == 's')
		return (ft_putstr_fd_printf(va_arg(args, char *), 1, data));
	else if (template == 'p')
		return (ft_putptr_printf((long)va_arg(args, void *), \
		1, data, "0123456789abcdef"));
	else if (template == 'd')
		return (ft_putnbr_fd_printf(va_arg(args, int), 1, data, "0123456789"));
	else if (template == 'i')
		return (ft_putnbr_fd_printf(va_arg(args, int), 1, data, "0123456789"));
	else if (template == 'u')
		return (ft_putnbr_fd_printf(va_arg(args, unsigned int), \
		1, data, "0123456789"));
	else if (template == 'x')
		return (ft_putnbr_fd_printf((unsigned int)va_arg(args, int), 1, data, \
		"0123456789abcdef"));
	else if (template == 'X')
		return (ft_putnbr_fd_printf((unsigned int)va_arg(args, int), 1, data, \
		"0123456789ABCDEF"));
	else if (template == '%')
		return (ft_putchar_fd_printf('%', 1, data));
	return (1);
}
/*
*@brief Implements a custom printf function for formatted output.
*This function processes a format string and additional arguments
*to produce output similar to the standard printf.
*It supports custom format specifiers and handles variable arguments
*using the stdarg library.
*The function iterates through the format string, checking for the
*'%' character to identify format specifiers.
*When a format specifier is found, it processes the corresponding
*argument from the variable arguments list
*and formats it according to the specifier, handling special cases
*like pointer address formatting with 'p'.
*For regular characters, it simply writes them to the standard output.
*The function keeps track of the total number of characters written and
*returns this count upon completion.
*In case of an error during writing or formatting, it returns -1.
*@param input The format string containing text to be printed and format
*specifiers for subsequent arguments.
*@return The total number of characters written to the standard output;
*returns -1 in case of an error.
*/
int	ft_printf(const char *input, ...)
{
	t_counter	data;
	va_list		args;

	va_start(args, input);
	data.counter = 0;
	while (*input != '\0')
	{
		if (*input == '%')
		{
			if (*(++input) == 'p')
				if (ft_putstr_fd_printf("0x", 1, &data) != 2)
					return (-1);
			if (check_args(*input++, args, &data) == -1)
				return (-1);
		}
		else
		{
			if (write(1, input, 1) != 1)
				return (-1);
			data.counter++;
			input++;
		}
	}
	va_end(args);
	return (data.counter);
}
