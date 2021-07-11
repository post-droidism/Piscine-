void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_div;
	int	b_mod;

	a_div = *a / *b;
	b_mod = *a % *b;
	*a = a_div;
	*b = b_mod;
}
