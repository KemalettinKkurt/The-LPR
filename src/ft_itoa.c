/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkocakur <kkocakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 05:04:27 by kkocakur          #+#    #+#             */
/*   Updated: 2025/06/28 06:08:09 by kkocakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len = 1;
	long	nb = n;

	if (nb < 0)
		nb = -nb;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_numlen(n) + (n < 0);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (len-- && nb >= 0)
	{
		if (str[len] == '-')
			break;
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
