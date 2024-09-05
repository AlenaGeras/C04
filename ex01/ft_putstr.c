/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:46:03 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/14 13:53:45 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}
//#include<unistd.h>
// int main()
// {
// 	char string[] = "pisciner";
// 	ft_putstr(string);
// }