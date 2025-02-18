/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpedro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 01:17:24 by hpedro            #+#    #+#             */
/*   Updated: 2025/02/18 01:31:06 by hpedro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		puts("ERRO: denominador nao pode ser igual a zero");
	}
}

int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(12, 0, &div, &mod);
	printf("%d\t%d", div, mod);
	return (0);
}
