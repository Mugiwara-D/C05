/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:30:08 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/25 16:58:18 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;

	i = 0;
	while (i < power)
	{
		nb = nb*nb;
		i++;
	}
	return (nb);
}
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_iterative_power(2,5));
}
