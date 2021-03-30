/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:29:50 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/30 16:18:01 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	if (nb <= 1 && nb >= -1)
		return (0);
	else if ((nb % 2) == 1 || (nb % 2) == -1)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (i)
	{
		if (ft_is_prime(i))
			return (i);
		else
			i++;
	}
	return (0);
}
