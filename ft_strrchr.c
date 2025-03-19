/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:02:16 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/19 07:11:52 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last);
}

// #include <stdio.h>
// #include <string.h>
// #include "libft.h"

// int	main(void)
// {
// 	char	*str;
// 	char	*result1;
// 	char	*result2;
// 	int		c;

// 	str = "Hello, world!";

// 	// Test 1: Find 'l' in the string
// 	c = 'l';
// 	result1 = strrchr(str, c);
// 	result2 = ft_strrchr(str, c);
// 	printf("Test 1: Find '%c' in \"%s\"\n", c, str);
// 	printf("Original: %s\n", result1 ? result1 : "NULL");
// 	printf("Your ft_: %s\n\n", result2 ? result2 : "NULL");

// 	// Test 2: Find 'o' in the string
// 	c = 'o';
// 	result1 = strrchr(str, c);
// 	result2 = ft_strrchr(str, c);
// 	printf("Test 2: Find '%c' in \"%s\"\n", c, str);
// 	printf("Original: %s\n", result1 ? result1 : "NULL");
// 	printf("Your ft_: %s\n\n", result2 ? result2 : "NULL");

// 	// Test 3: Find '!' (last character) in the string
// 	c = '!';
// 	result1 = strrchr(str, c);
// 	result2 = ft_strrchr(str, c);
// 	printf("Test 3: Find '%c' in \"%s\"\n", c, str);
// 	printf("Original: %s\n", result1 ? result1 : "NULL");
// 	printf("Your ft_: %s\n\n", result2 ? result2 : "NULL");

// 	// Test 4: Find 'H' (first character) in the string
// 	c = 'H';
// 	result1 = strrchr(str, c);
// 	result2 = ft_strrchr(str, c);
// 	printf("Test 4: Find '%c' in \"%s\"\n", c, str);
// 	printf("Original: %s\n", result1 ? result1 : "NULL");
// 	printf("Your ft_: %s\n\n", result2 ? result2 : "NULL");

// 	// Test 5: Find '\0' (null terminator) in the string
// 	c = '\0';
// 	result1 = strrchr(str, c);
// 	result2 = ft_strrchr(str, c);
// 	printf("Test 5: Find null terminator in \"%s\"\n", str);
// 	printf("Original: %s\n", result1 ? "FOUND" : "NULL");
// 	printf("Your ft_: %s\n\n", result2 ? "FOUND" : "NULL");

// 	// Test 6: Find a character that doesn't exist in the string
// 	c = 'z';
// 	result1 = strrchr(str, c);
// 	result2 = ft_strrchr(str, c);
// 	printf("Test 6: Find '%c' in \"%s\"\n", c, str);
// 	printf("Original: %s\n", result1 ? result1 : "NULL");
// 	printf("Your ft_: %s\n", result2 ? result2 : "NULL");

// 	return (0);
// }