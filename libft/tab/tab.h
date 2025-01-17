/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbecker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:28:57 by mbecker           #+#    #+#             */
/*   Updated: 2024/09/05 15:07:05 by mbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAB_H
# define TAB_H

# include "../libft.h"

char		**ft_tabdup(char **tab);
char		**ft_tabndup(char **tab, int n);

char		**ft_tabjoin(char **tab, char *str, int free_tab, int free_str);

int			ft_tabfind(char *needle, char **haystack);
char		*ft_tabstr(char *needle, char **haystack);

#endif
