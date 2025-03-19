/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:00:20 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/19 23:30:04 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
//     char *result;

//     // Test case 1: Basic substring extraction
//     result = ft_substr("Hello World", 0, 5);
//     printf("Test 1: \"%s\"\n", result);
//     free(result);

//     // Test case 2: Substring from middle
//     result = ft_substr("Hello World", 6, 5);
//     printf("Test 2: \"%s\"\n", result);
//     free(result);

//     // Test case 3: Length beyond string end
//     result = ft_substr("Hello World", 6, 100);
//     printf("Test 3: \"%s\"\n", result);
//     free(result);

//     // Test case 4: Start beyond string length
//     result = ft_substr("Hello World", 20, 5);
//     printf("Test 4: \"%s\"\n", result);
//     free(result);

//     // Test case 5: Empty string
//     result = ft_substr("", 0, 5);
//     printf("Test 5: \"%s\"\n", result);
//     free(result);

//     return (0);
// }