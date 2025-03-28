/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:27:11 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/14 13:47:38 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t length)
{
	unsigned char	*new_dest;
	unsigned char	src;
	size_t			i;

	new_dest = b;
	src = c;
	i = 0;
	while (i++ < length)
		*new_dest++ = src;
	return (b);
}
// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[20] = "Hello, 42 School!";
//     printf("Before memset: %s\n", str);

//     ft_memset(str + 7, 'x', 5);
//     printf("After memset:  %s\n", str);

//     return 0;
// }
