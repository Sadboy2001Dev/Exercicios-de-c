/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 07:21:46 by hpedro            #+#    #+#             */
/*   Updated: 2025/02/18 08:10:44 by hpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	change;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				change = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = change;
			}
			i++;
		}
		size--;
	}
}

int	main(void)
{
	int	s[5] = {9, 6, 0, 1, 5};
	int	size = 5;

	ft_sort_int_tab(s, size);
	while (size > 0)
	{
		printf("%d\n", s[size - 1]);
		size--;
	}
	return (0);
}
