/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:01:47 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/19 04:03:53 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;
// 	char	*result;

// 	str1 = "   Hello, World!   ";
// 	str2 = " \t\n";
// 	str3 = "xyz123xyz";
// 	str4 = "xyz";

// 	printf("Test 1: Trimming spaces and tabs\n");
// 	result = ft_strtrim(str1, str2);
// 	printf("Original: \"%s\"\n", str1);
// 	printf("Set: \"%s\"\n", str2);
// 	printf("Result: \"%s\"\n\n", result);
// 	free(result);

// 	printf("Test 2: Trimming specific characters\n");
// 	result = ft_strtrim(str3, str4);
// 	printf("Original: \"%s\"\n", str3);
// 	printf("Set: \"%s\"\n", str4);
// 	printf("Result: \"%s\"\n\n", result);
// 	free(result);

// 	printf("Test 3: Nothing to trim\n");
// 	result = ft_strtrim("Hello", "xyz");
// 	printf("Original: \"%s\"\n", "Hello");
// 	printf("Set: \"%s\"\n", "xyz");
// 	printf("Result: \"%s\"\n\n", result);
// 	free(result);

// 	printf("Test 4: Empty string\n");
// 	result = ft_strtrim("", "abc");
// 	printf("Original: \"%s\"\n", "");
// 	printf("Set: \"%s\"\n", "abc");
// 	printf("Result: \"%s\"\n\n", result);
// 	free(result);

// 	printf("Test 5: Everything trimmed\n");
// 	result = ft_strtrim("abababa", "ab");
// 	printf("Original: \"%s\"\n", "abababa");
// 	printf("Set: \"%s\"\n", "ab");
// 	printf("Result: \"%s\"\n", result);
// 	free(result);

// 	return (0);
// }