int	ft_recursive_power(int nb, int power)
{
	power--;
	if (power == 0)
	{
		return (nb);
	}
	nb = (ft_recursive_power(nb , power) * nb);
	return (nb);
}
