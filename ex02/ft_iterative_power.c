/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:30:08 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/26 15:18:16 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int n;

	n = nb;
	i = 1;
	while (i < power)
	{
		n = n*nb;
		i++;
	}
	return (n);
}
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_iterative_power(5,6));
}
