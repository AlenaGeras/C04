/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:01:52 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/14 17:56:31 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	char	buffer[32];
	int		i;
	int		is_negative;

	base_size = 0;
	i = 0;
	is_negative = 0;
	if (!is_valid_base(base))
		return ;
	while (base[base_size] != '\0')
	{
		base_size++;
	}
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr < 0)
	{
		is_negative = 1;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		buffer[i++] = base[nbr % base_size];
		nbr /= base_size;
	}
	if (is_negative)
	{
		write(1, "-", 1);
	}
	while (i > 0)
	{
		write(1, &buffer[--i], 1);
	}
}
int	main(void)
{
	ft_putnbr_base(10, "01");
	write(1, "\n", 1);
	return (0);
}
