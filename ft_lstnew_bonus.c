/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:24:32 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/24 16:00:35 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element -> content = content;
	element -> next = NULL;
	return (element);
}
// #include <stdio.h>
// #include "libft.h"

// int main(void)
// {
//     char *str = "Hello, 42!";
//     t_list *new_node = ft_lstnew(str);

//     if (new_node)
//     {
//         printf("Node created!\n");
//         printf("Content: %s\n", (char *)new_node->content);
//         free(new_node);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return (0);
// }