/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:50:44 by aababach          #+#    #+#             */
/*   Updated: 2021/11/18 16:31:46 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_num(int n)
{
	int	nbr;

	nbr = 1;
	if (n < 0)
		n *= -1;
	if (n >= 10)
	{
		while (n >= 10)
		{
			n = n / 10;
			nbr += 1;
		}
		return (nbr);
	}
	return (1);
}

static char	*ft_rev_num(char *num, int s)
{
	int	len;
	int	i;
	int	temp;
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		s;

	s = 0;
	if (n < 0)
	{
		n *= -1;
		s = 1;
	}
	i = 0 + s;
	num = malloc (sizeof(char) * ft_count_num(n) + 1 + s);
	if (!num)
		return (0);
	while (n >= 10)
	{
		num[i] = n % 10 + 48;
		i++;
		n /= 10;
	}
	num[i] = n + 48;
	i++;
	num[i] = 0;
	ps(&num[1]);
	return (ft_rev_num(num, s));
}

int	main()
{
	int	c = -623;
	ps(ft_itoa(c));
}
