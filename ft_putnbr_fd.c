/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:04:59 by nsichtig          #+#    #+#             */
/*   Updated: 2025/03/20 02:08:34 by nsichtig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// #include "libft.h"

// int main(void)
// {
//     ft_putnbr_fd(42, 1);
//     ft_putchar_fd('\n', 1);

//     ft_putnbr_fd(-123456, 1);
//     ft_putchar_fd('\n', 1);

//     ft_putnbr_fd(2147483647, 1);
//     ft_putchar_fd('\n', 1);

//     ft_putnbr_fd(-2147483648, 1);
//     ft_putchar_fd('\n', 1);

//     return 0;
// }