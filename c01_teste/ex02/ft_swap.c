/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 01:07:03 by hpedro            #+#    #+#             */
/*   Updated: 2025/02/18 01:12:58 by hpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

int	main(void)
{
	int	n;
	int	m;

	n = 12;
	m = 10;
	printf ("Antes da troca: %d %d\n", n, m);
	ft_swap(&n, &m);
	printf("Depois da troca: %d %d", n, m);
	return (0);
}
