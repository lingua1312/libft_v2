/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:02:27 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/19 08:02:54 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len && needle[j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     const char *haystack = "Hello, this is a simple test string";
//     const char *needle = "simple";
//     size_t len = 25; // Limit the search length

//     char *result = ft_strnstr(haystack, needle, len);

//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found within the first %zu characters.\n", len);

//     return (0);
// }