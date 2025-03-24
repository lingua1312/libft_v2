/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:56:36 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/24 19:20:32 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (0);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     t_list *head = ft_lstnew("First");
//     t_list *second = ft_lstnew("Second");
//     t_list *third = ft_lstnew("Third");

//     if (!head || !second || !third)
//         return (1);

//     head->next = second;
//     second->next = third;

//     t_list *last = ft_lstlast(head);
//     if (last)
//         printf("Last element: %s\n", (char *)last->content);
//     else
//         printf("List is empty or NULL\n");

//     // Free allocated memory
//     free(head);
//     free(second);
//     free(third);

//     return 0;
// }