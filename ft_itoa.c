/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:02:35 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/19 05:26:40 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = get_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	*result;
// 	int		test_cases[7];
// 	int		i;

// 	test_cases[0] = 0;
// 	test_cases[1] = 42;
// 	test_cases[2] = -42;
// 	test_cases[3] = 2147483647;  // INT_MAX
// 	test_cases[4] = -2147483648; // INT_MIN
// 	test_cases[5] = 123456;
// 	test_cases[6] = -123456;

// 	i = 0;
// 	while (i < 7)
// 	{
// 		result = ft_itoa(test_cases[i]);
// 		printf("Test %d: Integer %d -> String \"%s\"\n",
// 			i + 1, test_cases[i], result);
// 		free(result);
// 		i++;
// 	}

// 	return (0);
// }