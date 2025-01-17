/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurochk <akurochk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:03:57 by mbecker           #+#    #+#             */
/*   Updated: 2024/09/16 13:14:10 by akurochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRC_H
# define SRC_H

# include "cub3d.h"
# include "structs.h"

/*********** DRAW.C           ***********/
void	draw(t_data *data);
void	draw_line(int x, float distance, t_data *data);

/*********** GET_POSITION.C   ***********/
void	get_position(t_data *data);

/*********** HANDLE_DESTROY.C ***********/
void	free_data(t_data *data);
int		handle_destroy(t_data *data);

/*********** HANDLE_KEY.C     ***********/
int		handle_key(int key, t_data *data);

/*********** INIT_DATA.C      ***********/
int		init_data(t_data *data);
void	init_ray(t_ray *ray, float a, t_data *data);

/*********** MINIMAP.C        ***********/
void	draw_minimap(t_data *data);

/*********** RAY_CASTING.C      ***********/
void	ray_casting(t_data *data);

/*********** PARSING.C        ***********/
int		error(char *str, char *str2);
int		parsing(int ac, char **av, t_data *data);

/*********** MOUSE_BONUS.C    ***********/
int		handle_mouse_d(int button, int x, int y, t_data *data);
int		handle_mouse_m(int x, int y, t_data *data);
int		handle_mouse_u(int button, int x, int y, t_data *data);

#endif