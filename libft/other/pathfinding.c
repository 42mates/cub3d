/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pathfinding.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbecker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:12:54 by mbecker           #+#    #+#             */
/*   Updated: 2024/08/29 11:52:49 by mbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other.h"

/**
 * Performs a depth-first search on a 2d map, starting from a 
 * given position (i, j).
 * The search is limited to positions specified in 'notwalls''s characters.
 * Visited positions are filled with '~'.
 * 
 * @param map The map to perform the depth-first search on.
 * @param i The starting row index.
 * @param j The starting column index.
 * @param notwalls A string containing characters that are considered 
 * valid positions to visit.
 * 
 * @note Only a valid starting position will fill the paths.
 */
void	ft_dfs(char **map, int i, int j, char *notwalls)
{
	int	m;
	int	n;

	m = ft_strlen(*map);
	n = ft_tablen(map);
	if (i < 0 || i >= n || j < 0 || j >= m
		|| !ft_strchr(notwalls, map[i][j])
		|| map[i][j] == '~')
		return ;
	map[i][j] = '~';
	ft_dfs(map, i + 1, j, notwalls);
	ft_dfs(map, i - 1, j, notwalls);
	ft_dfs(map, i, j + 1, notwalls);
	ft_dfs(map, i, j - 1, notwalls);
}
