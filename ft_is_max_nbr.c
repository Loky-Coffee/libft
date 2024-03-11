/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_max_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 05:25:38 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/19 09:30:50 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Finds the maximum number in an array of integers.
/// This function iterates through an integer array, comparing each element
/// to find the largest value.
/// It assumes that the array is terminated with a '\0' character,
/// similar to a string.
/// The function first checks if the array pointer is NULL, returning 0 in
/// that case to indicate an error or empty array.
/// It then calculates the length of the array and iterates through it,
/// updating the maximum value found.
/// @param arg The integer array in which to find the maximum number.
/// @return The maximum integer found in the array; returns 0 if the
/// array is NULL or empty.
int	ft_is_max_nbr(int *arg)
{
	int	i;
	int	min;
	int	length;

	i = 0;
	min = arg[0];
	if (!arg)
		return (0);
	length = 0;
	while (arg[length] != '\0')
		length++;
	while (i < length)
	{
		if (arg[i] > min)
			min = arg[i];
		i++;
	}
	return (min);
}
