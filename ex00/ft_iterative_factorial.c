
int	ft_iterative_factorial(int nb)
{
	int i;
	int n;

	i = 1;
	n = 1;
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}
#include <stdio.h>
int main()
{
	printf("%d\n",ft_iterative_factorial(7));
}
