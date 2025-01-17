/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbecker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:36:48 by mbecker           #+#    #+#             */
/*   Updated: 2024/09/05 16:01:16 by mbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

//returns a pointer to the first occurence of c in str.
char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	else
		return (NULL);
}

//returns a pointer to the last occurence of c in str.
char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occ;

	last_occ = NULL;
	while (*str != 0)
	{
		if (*str == (char)c)
			last_occ = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)last_occ);
}
