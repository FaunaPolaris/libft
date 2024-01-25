/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_nullv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:26:12 by fpolaris          #+#    #+#             */
/*   Updated: 2023/09/11 19:31:09 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"

void	mtx_nullv(t_vector *m)
{
	m->x = 0;
	m->y = 0;
	m->z = 0;
	m->color = 0;
}
