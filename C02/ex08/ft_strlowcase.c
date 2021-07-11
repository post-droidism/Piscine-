char	*ft_strlowcase(char	*str)
{
	int	alpha;

	alpha = 0;
	while (str[alpha] != '\0')
	{
		if (str[alpha] >= 'A' && str[alpha] <= 'Z')
			str[alpha] += 32;
		alpha++;
	}
	return (str);
}
