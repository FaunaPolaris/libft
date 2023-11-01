/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:35:52 by fpolaris          #+#    #+#             */
/*   Updated: 2023/08/23 16:35:57 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

char	*fd_gnl(int fd)
{
	static char	*memory = (char *)mem_calloc(1, sizeof(char));
	char	**hold;
	char	*current;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	memory = str_join(memory, fd_read_upto(fd, '\n'), 2);
	hold = str_split_once(memory, '\n', 1);
	current = hold[0];
	memory = hold[1];
	free(hold);
	return (current);
}
