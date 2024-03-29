/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_dll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:26:27 by fpolaris          #+#    #+#             */
/*   Updated: 2023/11/30 17:40:47 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	put_dll(t_dllist *head, int fd)
{
	int	output;

	output = 0;
	if (!head)
		return (0);
	while (head)
	{
		output += put_str(head->as_str, fd);
		if (head->next)
		{
			write(fd, " <-> ", 5);
			output += 5;
		}
		head = head->next;
	}
	write(fd, "\n\n", 2);
	return (output + 2);
}
