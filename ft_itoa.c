/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 03:15:06 by aalatzas          #+#    #+#             */
/*   Updated: 2023/10/16 17:13:06 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int intcount(int n)
{
	int i;

	i = 0;
	 while (n /= 10)
		i++;
	 return (i);
}

char *ft_itoa(int n)
{
	char	*string;
	int		inti;
	int		i;

	i = 0;
	inti = intcount(n);
	string = (char)ft_calloc(inti + 1, sizeof(char));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		string[0] = '-';
	}
	while (inti > 0)
	{
		string[i] = inti + '0';
		inti--;
		i++;
	}
	return (NULL);
}

int main(void)
{
	int i;
	i = 125;
	ft_itoa(i);
	return (0);
}