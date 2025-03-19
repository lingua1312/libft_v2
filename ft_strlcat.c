/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:45:01 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/19 02:12:55 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len	= ft_strlen(src);
	dst_len	= ft_strlen(dst);

	if (dst_len >= dstsize)
		dst_len = dstsize;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
// #include <stdio.h>
// #include <string.h>
// #include "libft.h"

// int main(void)
// {
//     char buffer[20] = "Hello, ";
//     char *src = "World!";
//     size_t buffer_size = sizeof(buffer);

//     printf("Before ft_strlcat: \"%s\"\n", buffer);

//     size_t result = ft_strlcat(buffer, src, buffer_size);

//     printf("After ft_strlcat: \"%s\"\n", buffer);
//     printf("Total length attempted to create: %zu\n", result);

//     return 0;
// }