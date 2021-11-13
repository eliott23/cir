/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:17:47 by aababach          #+#    #+#             */
/*   Updated: 2021/11/13 23:44:10 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						s;
	unsigned long long int			rslt;
	unsigned long long int			h;

	h = 9223372036854775807;
	rslt = 0;
	s = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10 + str[i] - 48;
		if (rslt > h && s > 0)
			return (-1);
		if (rslt > h + 1 && s < 0)
			return (0);
		i++;
	}
	return ((int)rslt * s);
}

int	main( )
{
	char	a[] = "9223372036854775807";
	pi(atoi(a));
	ps("\n");
	pi(ft_atoi(a));
	ps("\n");
}
