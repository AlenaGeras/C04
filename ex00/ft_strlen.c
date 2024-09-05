/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:39:27 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/14 13:45:05 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
#include <stdio.h>

// int	main(void)
// {
// 	char string[] = "pisciner";
// 	int length = ft_strlen(string);
// 	printf("the length of the string\"%s\"is:%d\n", string, length);
// 	return (0);
// }