/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:23:41 by aababach          #+#    #+#             */
/*   Updated: 2021/11/05 14:32:46 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	unsigned char	a;
	int				i;

	i = c - 48;
	a = c;
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z') || (i >= 0 && i <= 9))
		return (1);
	return (0);
}