/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 05:24:48 by hpedro            #+#    #+#             */
/*   Updated: 2025/02/18 05:31:49 by hpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	main(void)
{
	int	size;
	char	*name;

	name = "Kupessa";
	size = ft_strlen(name);
	printf("O numero de caractere é: %d\n", size);
	return (0);
}
