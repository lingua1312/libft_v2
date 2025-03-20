/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 23:40:35 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/20 01:37:37 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     const char str[] = "Hello, 42!";
//     char c = '4';
//     size_t n = 10;
//     char *result;

//     result = (char *)ft_memchr(str, c, n);
//     if (result)
//         printf("Character '%c' found at position: %ld\n", c, result - str);
//     else
//         printf("Character '%c' not found in the first %zu bytes.\n", c, n);

//     return 0;
// }