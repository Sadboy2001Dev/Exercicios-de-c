/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 05:06:33 by hpedro            #+#    #+#             */
/*   Updated: 2025/02/18 05:16:29 by hpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		write (1, &str[size], 1);
		size++;
	}
}

int	main(void)
{
	char	*c;

	c = "Gil";
	ft_putstr(c);
	return (0);
}
