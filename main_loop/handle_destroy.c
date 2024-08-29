/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurochk <akurochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:27:42 by akurochk          #+#    #+#             */
/*   Updated: 2024/08/29 14:55:33 by akurochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	free_data(t_data *data)
{
	// free all malloced data: map, pathes etc.
	free(data);
}

int	handle_destroy(t_data *data)
{
	if (data->win)
		mlx_destroy_window(data->mlx, data->win);
	// destroy all images of extra textures: walls, nps, environment etc.
	free_data(data);
	exit(0);
}