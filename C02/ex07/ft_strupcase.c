char	*ft_strupcase(char	*str)
{
	int	alpha;

	alpha = 0;
	while (str[alpha] != '\0')
	{
		if (str[alpha] >= 'a' && str[alpha] <= 'z')
			str[alpha] -= 32;
		alpha++;
	}
	return (str);
}
