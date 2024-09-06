/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbecker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:20:15 by mbecker           #+#    #+#             */
/*   Updated: 2024/09/06 13:48:05 by mbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include "cub3d.h"

typedef struct s_ray
{
	float dx;	// x distance to the wall
	float dy;	// y distance to the wall

	int x_sign;	// sign of the x direction
	int y_sign;	// sign of the y direction

	float x_hor; // for horizonal wall collision
	float y_hor; // for horizonal wall collision
	
	float x_ver; // for vertical wall collision
	float y_ver; // for vertical wall collision

	float s_hor; // horizontal step of the ray
	float s_ver; // vertical step of the ray

	float d_hor; // distance to horizontal wall or grid
	float d_ver; // distance to vertical wall or grid
	
}			t_ray;	

typedef struct s_img
{
	void		*img_ptr;	// img_ptr
	char		*d_a;	// data_addr
	int			bpp;	// bits_per_pixel
	int			s_l;	// size_line
	int			en;		// endian;
	int 		size_x;	// horizontal size in pixels
	int			size_y;	// vertical size in pixels
}				t_img;

typedef struct s_data
{
	char		*textures[4];
	int			colors[2];
	
	char		**map;
	int			map_h;	// heigh of the map
	int			map_w;	// width of the map
	float		pos_x;	// x position of the player
	float		pos_y;	// y position of the player
	float		dir_v;	// view direction of the player

	t_img		img;
	t_img		img_txt[4];
	int			id_txt;	// id of the texture in array
	float		w_txt;	// visual width of the texture	

	void		*win;
	void		*mlx;
}				t_data;


#endif
