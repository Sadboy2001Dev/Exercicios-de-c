/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 05:38:43 by hpedro            #+#    #+#             */
/*   Updated: 2025/02/18 07:19:24 by hpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	change;

	i = 0;
	while (i < (size / 2))
	{
		change = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = change;
		i++;
	}
}

int	main(void)
{
	int	a[5] = {1, 2, 3, 4, 5};
	int	size;

	size = 5;
	ft_rev_int_tab(a, size);
	printf("%d, %d, %d, %d, %d", a[0], a[1], a[2], a[3], a[4]);
	return (0);
}
