/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 23:13:25 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/17 00:44:52 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	bytes;

	if (!count || !size)
		return (malloc(0));
	bytes = count * size;
	if (bytes / size != count)
		return (NULL);
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;
// 	size_t	n = 5;

// 	arr = (int *)ft_calloc(n, sizeof(int));
// 	if (!arr)
// 	{
// 		printf("Memory allocation failed!\n");
// 		return (1);
// 	}
// 	for (size_t i = 0; i < n; i++)
// 		printf("%d ", arr[i]); // Should print "0 0 0 0 0"

// 	free(arr);
// 	return (0);
// }
