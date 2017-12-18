/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:49:31 by jagarcia          #+#    #+#             */
/*   Updated: 2017/12/18 12:28:23 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# define BUFF_SIZE 1032
# define NEW(x) ft_strnew(x)
# include <fcntl.h>

int					get_next_line(const int fd, char **line);
typedef struct		s_fd
{
	int				fd;
	char			*buffer;
	struct s_fd		*next;
}					t_fd;

#endif
