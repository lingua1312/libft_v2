/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:23:54 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/17 23:13:41 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*result;
	int		len;

	len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);

	ft_memcpy(result, src, len);
	result[len] = '\0';

	return (result);
}
