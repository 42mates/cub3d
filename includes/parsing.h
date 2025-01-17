/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbecker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:56:16 by mbecker           #+#    #+#             */
/*   Updated: 2024/09/09 13:46:24 by mbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "cub3d.h"

int		error(char *msg1, char *msg2);

int		parse_elements(t_data *data, char **map, char **tofind);

int		parse_map(t_data *data, char **map);

char	**get_rgb_tab(char **val);
int		has_multiple_players(char to_check);
int		is_valid_ground(char **map, int i, int j);
void	remove_nl(char **map);

#endif
