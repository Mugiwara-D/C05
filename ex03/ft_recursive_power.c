/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:05:49 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/29 12:06:39 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	power--;
	if (power == 0)
	{
		return (nb);
	}
	nb = (ft_recursive_power(nb, power) * nb);
	return (nb);
}
