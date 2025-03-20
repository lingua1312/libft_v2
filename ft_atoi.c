/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:00:35 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/20 02:15:09 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	whitespace_check(const char *ws)
{
	if (ws && (*ws == ' ' || *ws == '\t' || *ws == '\n'
			|| *ws == '\v' || *ws == '\f' || *ws == '\r'))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	num;

	neg = 1;
	num = 0;
	while (whitespace_check(str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + ((*str - '0') * neg);
		str++;
	}
	return (num);
}
