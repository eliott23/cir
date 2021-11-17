/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:56:49 by aababach          #+#    #+#             */
/*   Updated: 2021/11/17 20:05:43 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_sep(char const *s, char c)
{
	int	i;
	int	sc;

	sc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			sc++;
		i++;
	}
	return (sc);
}

static int	ft_count_length(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_next_substr(char const *s, char c)
{
	int	i;
	int	sep;

	sep = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			sep++;
			i++;
		}
		if (sep)
			return (i);
		i++;
	}
	return (0);
}
static void	ft_fuck_norms(int *a, char **str, char *s, char c)
{
	char	**str;

	*a
	if (!s)
		return (0);
	while (s[*a] == c)
		(*a)++;
}

char **ft_split(char const *s, char c)
{
	char **str;
	int	i;
	int	a;
	int	b;
	int	len;

	i = 0;
	b = 0;
	a = 0;
	if (!s)
		return (0);
	str = malloc (sizeof(char *) * (ft_count_sep(s,c) + 1));
	if (!str)
		return (0);
	while (s[a] == c)
		a++;
	while (i < ft_count_sep(s,c))
	{
		str[i] = malloc (sizeof(char) * ft_count_length(&s[a],c) + 1);
		if (!str[i])
			return (0);
		b = 0;
		len = ft_count_length(&s[a],c);
		while (b < len)
			str[i][b++] = s[a++];
		str[i][b] = 0;
		i++;
		a = ft_next_substr(&s[a],c) + a;
	}
	str[i] = 0;
	return (str);
}
