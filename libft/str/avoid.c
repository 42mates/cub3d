/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avoid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbecker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:49:58 by mbecker           #+#    #+#             */
/*   Updated: 2024/09/03 14:08:33 by mbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/**
 * @brief Searches for the first character of str that is not a space.
 * @param include_nl If TRUE, the function will also skip newlines.
 * @return A pointer to the first character that is not a space, 
 * or NULL if str is NULL.
 */
char	*avoid_space(char *str, int include_nl)
{
	if (!str)
		return (NULL);
	if (include_nl)
	{
		while (*str == ' '
			|| *str == '\t'
			|| *str == '\n'
			|| *str == '\v'
			|| *str == '\f'
			|| *str == '\r')
			str++;
	}
	else
	{
		while (*str == ' '
			|| *str == '\t'
			|| *str == '\v'
			|| *str == '\f'
			|| *str == '\r')
			str++;
	}
	return (str);
}
