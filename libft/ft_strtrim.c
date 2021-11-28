/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:54:26 by aababach          #+#    #+#             */
/*   Updated: 2021/11/28 18:39:40 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in(const char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;
	size_t	min_i;
	size_t	max_i;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	max_i = len - 1;
	min_i = 0;
	while (ft_is_in(s1[min_i], (char *)set))
		min_i++;
	while (ft_is_in(s1[max_i], (char *)set))
		max_i--;
	if (min_i == len)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * max_i - min_i + 2);
	if (!str)
		return (0);
	len = 0;
	while (min_i <= max_i)
		str[len++] = s1[min_i++];
	str[len] = 0;
	return (str);
}
