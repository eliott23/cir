/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:17:47 by aababach          #+#    #+#             */
/*   Updated: 2021/11/14 00:27:26 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_skip_signe(int *i, const char *str, int *s)
{
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*(s) *= -1;
		(*i)++;
	}
}

int	ft_count_num(const char *str, int i)
{
	int	l;

	l = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		l++;
		i++;
	}
	return (l);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						s;
	unsigned long long int	rslt;
	unsigned long long int	h;
	int						l;

	h = 9223372036854775807;
	rslt = 0;
	s = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	ft_skip_signe (&i, str, &s);
	l = ft_count_num(str, i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10 + str[i] - 48;
		if ((rslt > h && s > 0) || (s > 0 && l >= 20))
			return (-1);
		if ((rslt > h + 1 && s < 0) || (s < 0 && l >= 20))
			return (0);
		i++;
	}
	return ((int)rslt * s);
}
