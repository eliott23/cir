/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:44:45 by aababach          #+#    #+#             */
/*   Updated: 2021/11/14 20:21:01 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*rtrn;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	rtrn = malloc (sizeof(char) * len + 1);
	if (rtrn == NULL)
		return (0);
	while (i < len)
	{
		rtrn[i] = s1[i];
		i++;
	}
	rtrn[i] = '\0';
	return (rtrn);
}
