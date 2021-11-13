/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:44:45 by aababach          #+#    #+#             */
/*   Updated: 2021/11/13 18:45:06 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*rtrn;
	size_t	len;

	len = ft_strlen(s1);
	rtrn = malloc (sizeof(char) * len);
	while (len-- > 0)
	rtrn[len] = s1[len];
	return (rtrn);
}
