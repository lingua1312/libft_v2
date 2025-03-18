/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:01:24 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/19 00:37:03 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len1 = 0;
	while (s1[len1])
		len1++;
	len2 = 0;
	while (s2[len2])
		len2++;
	joined = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!joined)
		return (NULL);
	i = -1;
	while (++i < len1)
		joined[i] = s1[i];
	j = -1;
	while (++j < len2)
		joined [i + j] = s2[j];
	joined[i + j] = '\0';
	return (joined);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char *s1 = "Hello, ";
//     char *s2 = "World!";

//     char *result = ft_strjoin(s1, s2);
//     if (result)
//     {
//         printf("Joined string: %s\n", result);
//         free(result); // Free allocated memory
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }