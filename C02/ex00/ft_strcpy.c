char	*ft_strcpy(char	*dest, char	*strc)
{
	int	i;

	i = 0;
	while (strc[i])
	{
		dest[i] = strc[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
