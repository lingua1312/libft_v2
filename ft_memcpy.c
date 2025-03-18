/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:18:09 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/17 16:19:27 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	while (n > 0)
	{
		*(temp_dst++) = *(temp_src++);
		n--;
	}
	return (dst);
}
// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// void test_ft_memcpy()
// {
//     char src1[] = "Hello, world!";
//     char dst1[20];
//     char dst2[20];

//     // Using ft_memcpy
//     ft_memcpy(dst1, src1, strlen(src1) + 1);

//     // Using standard memcpy
//     memcpy(dst2, src1, strlen(src1) + 1);

//     // Compare results
//     if (strcmp(dst1, dst2) == 0)
//         printf("Test passed: Strings match -> %s\n", dst1);
//     else
//         printf("Test failed: Strings do not match\n");

//     // Edge case: copying zero bytes
//     char empty_dst[10] = "abcdef";
//     ft_memcpy(empty_dst, "123", 0);
//     printf("Zero-byte copy test: %s\n", empty_dst);

//     // Edge case: NULL source and destination
//     if (ft_memcpy(NULL, NULL, 5) == NULL)
//         printf("NULL handling test passed\n");
//     else
//         printf("NULL handling test failed\n");
// }

// int main()
// {
//     test_ft_memcpy();
//     return 0;
// }
