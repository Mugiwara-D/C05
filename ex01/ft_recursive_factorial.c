/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:40:18 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/29 11:41:13 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (!nb);
	return (nb * ft_recursive_factorial(nb - 1));
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_factorial(0));
}
