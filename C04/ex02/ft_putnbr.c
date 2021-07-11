#include <unistd.h>
int ft_putnbr(int nbr)
{
	write(1, &nbr, sizeof(int));
	return(0);
}
int main()
{
	ft_putnbr(6);
	return(0);
}
