/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:02:57 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/21 20:29:28 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned char	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result [i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

//
// char sample_function(unsigned int index, char c)
// {
// 	if (index % 2 == 0)
// 		return (c - 32);
// 	return (c);
// }

// int main(void)
// {
// 	char *original = "abcdef";
// 	char *modified;

// 	modified = ft_strmapi(original, sample_function);
// 	if (!modified)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}

// 	printf("Original: %s\n", original);
// 	printf("Modified: %s\n", modified);

// 	free(modified);
// 	return (0);
// }