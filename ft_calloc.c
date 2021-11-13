/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:32:02 by aababach          #+#    #+#             */
/*   Updated: 2021/11/13 13:32:31 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*rtrn;
	size_t			i;
	unsigned char	*c;

	rtrn = malloc(count*size);
	if (rtrn == NULL)
		return(0);
	i = 0;
	c = (unsigned char *)rtrn;
	while (i < count*size)
	{
		c[i] = 0;
		i++;
	}
	return (rtrn);
}
