/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 04:52:48 by hpedro            #+#    #+#             */
/*   Updated: 2025/02/18 05:01:08 by hpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b != 0)
	{
		tmp = *a / *b;
		*b = *a % *b;
		*a = tmp;
	}
}

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 12;
	n2 = 6;
	printf("Antes da funcao: %d\t%d\n", n1, n2);
	ft_ultimate_div_mod(&n1, &n2);
	printf("Depois da funcao: %d\t%d\n", n1, n2);
	return (0);
}
